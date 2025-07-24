// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lane_msgs:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_INFO__TRAITS_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lane_msgs/msg/detail/lane_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'left_lane'
// Member 'right_lane'
// Member 'center_line'
#include "geometry_msgs/msg/detail/polygon__traits.hpp"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace lane_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_lane
  {
    out << "left_lane: ";
    to_flow_style_yaml(msg.left_lane, out);
    out << ", ";
  }

  // member: right_lane
  {
    out << "right_lane: ";
    to_flow_style_yaml(msg.right_lane, out);
    out << ", ";
  }

  // member: center_line
  {
    out << "center_line: ";
    to_flow_style_yaml(msg.center_line, out);
    out << ", ";
  }

  // member: lane_width
  {
    out << "lane_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_width, out);
    out << ", ";
  }

  // member: lane_type
  {
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << ", ";
  }

  // member: lane_angle
  {
    out << "lane_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_angle, out);
    out << ", ";
  }

  // member: curvature_radius
  {
    out << "curvature_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature_radius, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lane:\n";
    to_block_style_yaml(msg.left_lane, out, indentation + 2);
  }

  // member: right_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lane:\n";
    to_block_style_yaml(msg.right_lane, out, indentation + 2);
  }

  // member: center_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_line:\n";
    to_block_style_yaml(msg.center_line, out, indentation + 2);
  }

  // member: lane_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_width, out);
    out << "\n";
  }

  // member: lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << "\n";
  }

  // member: lane_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_angle, out);
    out << "\n";
  }

  // member: curvature_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature_radius, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace lane_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lane_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lane_msgs::msg::LaneInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  lane_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lane_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lane_msgs::msg::LaneInfo & msg)
{
  return lane_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lane_msgs::msg::LaneInfo>()
{
  return "lane_msgs::msg::LaneInfo";
}

template<>
inline const char * name<lane_msgs::msg::LaneInfo>()
{
  return "lane_msgs/msg/LaneInfo";
}

template<>
struct has_fixed_size<lane_msgs::msg::LaneInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lane_msgs::msg::LaneInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lane_msgs::msg::LaneInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LANE_MSGS__MSG__DETAIL__LANE_INFO__TRAITS_HPP_
