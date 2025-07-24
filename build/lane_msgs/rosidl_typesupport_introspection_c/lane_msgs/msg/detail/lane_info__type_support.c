// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lane_msgs:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lane_msgs/msg/detail/lane_info__rosidl_typesupport_introspection_c.h"
#include "lane_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lane_msgs/msg/detail/lane_info__functions.h"
#include "lane_msgs/msg/detail/lane_info__struct.h"


// Include directives for member types
// Member `left_lane`
// Member `right_lane`
// Member `center_line`
#include "geometry_msgs/msg/polygon.h"
// Member `left_lane`
// Member `right_lane`
// Member `center_line`
#include "geometry_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"
// Member `lane_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lane_msgs__msg__LaneInfo__init(message_memory);
}

void lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_fini_function(void * message_memory)
{
  lane_msgs__msg__LaneInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_member_array[8] = {
  {
    "left_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs__msg__LaneInfo, left_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs__msg__LaneInfo, right_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs__msg__LaneInfo, center_line),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs__msg__LaneInfo, lane_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs__msg__LaneInfo, lane_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs__msg__LaneInfo, lane_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curvature_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs__msg__LaneInfo, curvature_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs__msg__LaneInfo, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_members = {
  "lane_msgs__msg",  // message namespace
  "LaneInfo",  // message name
  8,  // number of fields
  sizeof(lane_msgs__msg__LaneInfo),
  lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_member_array,  // message members
  lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_type_support_handle = {
  0,
  &lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lane_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lane_msgs, msg, LaneInfo)() {
  lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)();
  lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)();
  lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)();
  lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_type_support_handle.typesupport_identifier) {
    lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lane_msgs__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
