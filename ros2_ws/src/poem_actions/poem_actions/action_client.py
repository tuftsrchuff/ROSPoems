#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

# from my_robot_interfaces.action import CountUntil
from custom_interfaces.action import Poem
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle, GoalStatus
import requests
import time

class PoemsClientNode(Node):
    def __init__(self):
        super().__init__("poems_client")
        self.poem_client_ = ActionClient(self, Poem, "poems")
        self.url = "http://127.0.0.1:5000/mission"
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.poems = []
    
    def timer_callback(self):
        try:
            params = {
                "poems": len(self.poems)
            }
            response = requests.get(self.url, params=params)

            #Need to update with
            data = response.json()
            print(data.get("poems"))
            if data.get("update"):
                self.poems = data.get("poems")

                #TODO: Update with poem to process
                for poem in self.poems:
                    self.send_goal(poem.get("poem"))
            else:
                self.get_logger().info("No new poems")
            print(f"Response code: {response.status_code}")
            print(f"Response: {response.text}")

        except Exception as e:
            self.get_logger().error(f"Error during request: {e}")
            return


    def send_goal(self, poem):
        #Wait for the server
        self.poem_client_.wait_for_server()

        #Create a goal
        goal = Poem.Goal()
        goal.poem = poem
        goal.priority = 1

        #Send the goal
        self.get_logger().info("Sending goal")

        self.poem_client_.\
            send_goal_async(goal, feedback_callback=self.goal_feedback_callback).\
            add_done_callback(self.goal_response_callback)
        
    def cancel_goal(self):
        self.get_logger().info("Send a cancel request")
        self.goal_handle_.cancel_goal_async()
        self.timer_.cancel()
    
    #Receive whether goal was accepted or not
    def goal_response_callback(self, future):
        self.goal_handle_ : ClientGoalHandle = future.result()
        if self.goal_handle_.accepted:
            self.get_logger().info("Goal got accepted")
            self.goal_handle_.get_result_async().add_done_callback(self.goal_result_callback)
        
        else:
            self.get_logger().warn("Goal got rejected")

    def goal_result_callback(self, future):
        status = future.result().status
        result = future.result().result
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("Success")
        elif status == GoalStatus.STATUS_ABORTED:
            self.get_logger().error("Aborted")
        elif status == GoalStatus.STATUS_CANCELED:
            self.get_logger().warn("Canceled")
        
        self.get_logger().info("Result: " + str(result.message))

    
    def goal_feedback_callback(self, feedback_msg):
        progress = feedback_msg.feedback.progress
        self.get_logger().info("Got feedback: " + str(progress))





def main(args=None):
    #Starts ROS2 communication without this line it fails
    rclpy.init(args = args)
    node = PoemsClientNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()