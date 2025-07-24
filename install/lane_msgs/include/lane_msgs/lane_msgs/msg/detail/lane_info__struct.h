// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lane_msgs:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_INFO__STRUCT_H_
#define LANE_MSGS__MSG__DETAIL__LANE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_lane'
// Member 'right_lane'
// Member 'center_line'
#include "geometry_msgs/msg/detail/polygon__struct.h"
// Member 'lane_type'
#include "rosidl_runtime_c/string.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/LaneInfo in the package lane_msgs.
/**
  * LaneInfo.msg
 */
typedef struct lane_msgs__msg__LaneInfo
{
  /// Boundaries
  geometry_msgs__msg__Polygon left_lane;
  geometry_msgs__msg__Polygon right_lane;
  geometry_msgs__msg__Polygon center_line;
  /// Attributes
  float lane_width;
  rosidl_runtime_c__String lane_type;
  float lane_angle;
  float curvature_radius;
  /// Optional timestamp
  builtin_interfaces__msg__Time stamp;
} lane_msgs__msg__LaneInfo;

// Struct for a sequence of lane_msgs__msg__LaneInfo.
typedef struct lane_msgs__msg__LaneInfo__Sequence
{
  lane_msgs__msg__LaneInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lane_msgs__msg__LaneInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LANE_MSGS__MSG__DETAIL__LANE_INFO__STRUCT_H_
