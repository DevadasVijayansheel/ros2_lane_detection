# LaneInfo.msg

# Boundaries
geometry_msgs/Polygon left_lane
geometry_msgs/Polygon right_lane
geometry_msgs/Polygon center_line

# Attributes
float32 lane_width
string lane_type
float32 lane_angle
float32 curvature_radius

# Optional timestamp
builtin_interfaces/Time stamp
