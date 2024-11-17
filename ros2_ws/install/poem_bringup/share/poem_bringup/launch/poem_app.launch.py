from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    poem_action_server_node = Node(
        package="poem_actions",
        executable="poems_server"
    )

    poem_action_client_node = Node(
        package="poem_actions",
        executable="poems_client",
        name="client_one",
        parameters=[
            {"url": "http://127.0.0.1:5000/mission"}
        ]
    )

    poem_action_client_node2 = Node(
        package="poem_actions",
        executable="poems_client",
        name="client_two",
        parameters=[
            {"url": "http://127.0.0.1:5000/mission"}
        ]
    )

    ld.add_action(poem_action_server_node)
    ld.add_action(poem_action_client_node)
    ld.add_action(poem_action_client_node2)

    return ld