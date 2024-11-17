#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

# from my_robot_interfaces.action import CountUntil
from custom_interfaces.action import Poem
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle, GoalStatus
import requests

'''
    Action client node that requests a url endpoint every second for new poems.
    If a new poem is received it sends the poems to an action server to process.
'''

class PoemsClientNode(Node):
    def __init__(self):
        super().__init__("poems_client")
        self.poem_client_ = ActionClient(self, Poem, "poems")
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.poems = []
        self.declare_parameter("url", "asdf")

        self.url = self.get_parameter("url").value


    #Every second this executes a GET request to url endpoint, requesting
    #for new poems. If poems received sends goal to action server
    def timer_callback(self):
        try:
            params = {
                "poems": len(self.poems)
            }
            response = requests.get(self.url, params=params)

            #Verify new poems received with update flag
            data = response.json()
            if data.get("update"):
                self.poems = data.get("poems")

                #Send each poem to action server
                for poem in self.poems:
                    self.send_goal(poem.get("poem"))
            
            else:
                self.get_logger().info("No new poems")

        except Exception as e:
            self.get_logger().error(f"Error during request: {e}")
            return


    #Send goal to action server with poem to process
    def send_goal(self, poem):
        #Wait for the server
        self.poem_client_.wait_for_server()

        #Create a goal
        goal = Poem.Goal()
        goal.poem = poem

        #Send the goal asynchronously with requests for feedback
        self.get_logger().info("Sending goal")

        self.poem_client_.\
            send_goal_async(goal, feedback_callback=self.goal_feedback_callback).\
            add_done_callback(self.goal_response_callback)

    
    #Validate that goal accepted by action server, monitor for finished result
    def goal_response_callback(self, future):
        self.goal_handle_ : ClientGoalHandle = future.result()
        if self.goal_handle_.accepted:
            self.get_logger().info("Goal got accepted")
            self.goal_handle_.get_result_async().add_done_callback(self.goal_result_callback)
        
        else:
            self.get_logger().warn("Goal got rejected")

    #Return result from action server and poem processing
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

    #Feedback for amount of poem processed by action server
    def goal_feedback_callback(self, feedback_msg):
        progress = feedback_msg.feedback.progress
        self.get_logger().info("Poem processed: " + str(progress) + "%")





def main(args=None):
    #Initiate client
    rclpy.init(args = args)
    node = PoemsClientNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()