import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ryan/Desktop/FleetGlue/ros2_ws/install/action_client'
