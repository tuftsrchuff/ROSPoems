#!/usr/bin/env python3
import rclpy
import time
import threading
from rclpy.node import Node
# from my_robot_interfaces.action import CountUntil
from custom_interfaces.action import Poem
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from rclpy.action.server import ServerGoalHandle
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
import heapq

class PoemActionNode(Node):
    def __init__(self):
        super().__init__("poem_server")
        self.goal_handle_ : ServerGoalHandle = None
        self.goal_lock_ = threading.Lock()
        self.goal_queue_ = []
        self.count_until_server_ = ActionServer(
            self, 
            Poem, 
            "poems", 
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
            handle_accepted_callback=self.handle_accepted_callback,
            execute_callback=self.execute_callback,
            callback_group=ReentrantCallbackGroup())
        self.get_logger().info("Started Action Server")

    def goal_callback(self, goal_request : Poem.Goal):
        self.get_logger().info("Received a goal")

        #Validate goal request
        if goal_request.priority <= 0 :
            self.get_logger().info("Rejecting the goal")
            return GoalResponse.REJECT
            
        self.get_logger().info("Accepting the goal")
        return GoalResponse.ACCEPT
    

    def handle_accepted_callback(self, goal_handle: ServerGoalHandle):
        with self.goal_lock_:
            if self.goal_handle_ is not None:
                self.goal_queue_.append(goal_handle)
            else:
                goal_handle.execute()
    
    def cancel_callback(self, goal_handle: ServerGoalHandle):
        self.get_logger().info("Received a cancel request")
        return CancelResponse.ACCEPT #Can use REJECT too

    def execute_callback(self, goal_handle: ServerGoalHandle):
        #Ensure not overwriting in different threads
        with self.goal_lock_:
            #Check on existing goal
            self.goal_handle_ = goal_handle


        
        
        #Execute the action
        self.get_logger().info("Executing the goal")
        feedback = Poem.Feedback()
        result = Poem.Result()

        #Get request from goal
        poem = goal_handle.request.poem
        priority = goal_handle.request.priority

        for i in range(len(poem)):
            if not goal_handle.is_active:
                result.success = True
                result.message = "Done"
                self.process_next_goal_in_queue_()
                return result
            if goal_handle.is_cancel_requested:
                self.get_logger().info("Canceling the goal")
                goal_handle.canceled()
                result.success = False
                result.message = "Cancelled"
                self.process_next_goal_in_queue_()
                return result

            self.get_logger().info("Processing line " + str(i))
            feedback.progress = int((i / len(poem)) * 100)
            goal_handle.publish_feedback(feedback)
            time.sleep(1)

        #Once done, set goal final state
        goal_handle.succeed()

        #and send the result
        
        result.success = True
        result.message = "Poem processed"
        self.process_next_goal_in_queue_()

        return result

    def process_next_goal_in_queue_(self):
        with self.goal_lock_:
            if len(self.goal_queue_) > 0:
                self.goal_queue_.pop(0).execute()
            else:
                self.goal_handle_ = None


def main(args=None):
    rclpy.init(args = args)
    node = PoemActionNode()
    rclpy.spin(node, MultiThreadedExecutor())
    rclpy.shutdown()

if __name__ == "__main__":
    main()