#!/usr/bin/env python3
import rclpy
import time
import threading
from rclpy.node import Node
from custom_interfaces.action import Poem
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from rclpy.action.server import ServerGoalHandle
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup


'''
    Action server that processes poems from clients. The server
    can handle multiple requests at once, queing new requests
    for future processing.
'''

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
            handle_accepted_callback=self.handle_accepted_callback,
            execute_callback=self.execute_callback,
            callback_group=ReentrantCallbackGroup())
        self.get_logger().info("Started Action Server")


    #Validates poem length then accepts goal
    def goal_callback(self, goal_request : Poem.Goal):
        self.get_logger().info("Received a goal")
        if len(goal_request.poem) == 0:
            self.get_logger().warn("Empty poem, rejecting process")
            return GoalResponse.REJECT
        self.get_logger().info("Accepting process")
        return GoalResponse.ACCEPT
    

    #Adds goal to queue if other goals in process, 
    #or just executes goal if queue empty
    def handle_accepted_callback(self, goal_handle: ServerGoalHandle):

        with self.goal_lock_:
            #Indicates another goal being processed, queue needed
            if self.goal_handle_ is not None:
                self.goal_queue_.append(goal_handle)
            else:
                goal_handle.execute()


    #Process poem
    def execute_callback(self, goal_handle: ServerGoalHandle):
        #Ensure not overwriting in different threads
        with self.goal_lock_:
            #Check on existing goal
            self.goal_handle_ = goal_handle
        
        #Execute the action
        self.get_logger().info("Executing the goal")
        feedback = Poem.Feedback()
        result = Poem.Result()

        poem = goal_handle.request.poem

        for i in range(len(poem)):
            #Goal completed
            if not goal_handle.is_active:
                result.success = True
                result.message = "Done"
                self.process_next_goal_in_queue_()
                return result

            #Return feedback of processing to client
            self.get_logger().info("Processing line " + str(poem[i]))
            feedback.progress = int((i / len(poem)) * 100)
            goal_handle.publish_feedback(feedback)
            time.sleep(1)

        #Once done, set goal final state, check queue 
        #for more actions then return result
        goal_handle.succeed()   
        result.success = True
        result.message = "Poem processed"
        self.process_next_goal_in_queue_()

        return result

    #Update queue to process more goals
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