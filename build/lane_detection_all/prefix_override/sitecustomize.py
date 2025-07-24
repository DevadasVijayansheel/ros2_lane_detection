import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mahitha/ros2_lane_detection_ws/install/lane_detection_all'
