# Import ROS 2 client library
import rclpy
from rclpy.node import Node

# Import message types
from sensor_msgs.msg import Image                      # For subscribing to camera image data
from geometry_msgs.msg import Polygon, Point32         # To define lane boundaries as polygons
from builtin_interfaces.msg import Time                # For timestamping messages

# Import your custom LaneInfo message
from lane_msgs.msg import LaneInfo

# Define the LaneDetection node class
class LaneDetection(Node):
    def __init__(self):
        super().__init__('lane_detection')  # Initialize the node with the name 'lane_detection'

        # Create a subscriber to the camera image topic
        self.subscription = self.create_subscription(
            Image,                                      # Message type
            '/camera/camera/color/image_raw',           # Topic name
            self.callback_image,                        # Callback function
            10                                           # Queue size
        )

        # Create a publisher to publish detected lane information
        self.publisher_lane = self.create_publisher(
            LaneInfo,                                   # Custom message type for lane info
            'lane_info',                                # Topic name
            10                                           # Queue size
        )

        self.i = 0  # Frame counter to simulate varying lane geometry

        # Log startup info
        self.get_logger().info('✅ LaneDetection node started and ready!')

    # Callback function called every time an image is received
    def callback_image(self, data):
        self.i += 1  # Increment frame counter

        # Initialize the LaneInfo message
        lane_info = LaneInfo()

        # ---------- Left Lane ----------
        # Simulate 5 points on the left lane with varying y-values
        left_points = []
        for j in range(5):
            p = Point32()
            p.x = j * 1.0                                   # x increases linearly
            p.y = 2.0 + ((self.i + j) % 10) * 0.1           # y varies slightly over time
            p.z = 0.0                                       # z stays flat
            left_points.append(p)
        lane_info.left_lane.points = left_points            # Assign to left_lane polygon

        # ---------- Right Lane ----------
        # Simulate 5 points on the right lane with varying y-values in the opposite direction
        right_points = []
        for j in range(5):
            p = Point32()
            p.x = j * 1.0
            p.y = -2.0 - ((self.i + j) % 10) * 0.1           # y drifts oppositely
            p.z = 0.0
            right_points.append(p)
        lane_info.right_lane.points = right_points          # Assign to right_lane polygon

        # ---------- Center Line ----------
        # Compute midpoint between corresponding left and right points
        center_points = []
        for lp, rp in zip(left_points, right_points):
            cp = Point32()
            cp.x = (lp.x + rp.x) / 2.0
            cp.y = (lp.y + rp.y) / 2.0
            cp.z = 0.0
            center_points.append(cp)
        lane_info.center_line.points = center_points        # Assign to center_line polygon

        # ---------- Other LaneInfo Fields ----------
        lane_info.lane_width = abs(left_points[0].y - right_points[0].y)  # Calculate lane width
        lane_info.lane_type = 'solid'                                    # Hardcoded as 'solid'
        lane_info.lane_angle = (self.i % 10) * 1.0                        # Simulated angle
        lane_info.curvature_radius = 100.0 + (self.i % 50) * 2.0         # Simulated curvature
        lane_info.stamp = self.get_clock().now().to_msg()                # Timestamp

        # Publish the LaneInfo message
        self.publisher_lane.publish(lane_info)

        # Log image info and the published lane info
        self.get_logger().info(
            f'📸 Image received: width={data.width}, height={data.height}'
        )
        self.get_logger().info(
            f'✅ Published LaneInfo: '
            f'width={lane_info.lane_width:.2f}, angle={lane_info.lane_angle:.1f}, '
            f'curvature={lane_info.curvature_radius:.1f}'
        )

# Define the main function that starts the node
def main(args=None):
    rclpy.init(args=args)               # Initialize ROS 2 communication
    lane_detector = LaneDetection()     # Create the node
    rclpy.spin(lane_detector)           # Keep it alive and spinning
    lane_detector.destroy_node()        # Cleanup on shutdown
    rclpy.shutdown()                    # Shutdown ROS 2

# Entry point
if __name__ == '__main__':
    main()

