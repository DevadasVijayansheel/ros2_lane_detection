// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lane_msgs:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_INFO__STRUCT_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'left_lane'
// Member 'right_lane'
// Member 'center_line'
#include "geometry_msgs/msg/detail/polygon__struct.hpp"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lane_msgs__msg__LaneInfo __attribute__((deprecated))
#else
# define DEPRECATED__lane_msgs__msg__LaneInfo __declspec(deprecated)
#endif

namespace lane_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneInfo_
{
  using Type = LaneInfo_<ContainerAllocator>;

  explicit LaneInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_lane(_init),
    right_lane(_init),
    center_line(_init),
    stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_width = 0.0f;
      this->lane_type = "";
      this->lane_angle = 0.0f;
      this->curvature_radius = 0.0f;
    }
  }

  explicit LaneInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_lane(_alloc, _init),
    right_lane(_alloc, _init),
    center_line(_alloc, _init),
    lane_type(_alloc),
    stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_width = 0.0f;
      this->lane_type = "";
      this->lane_angle = 0.0f;
      this->curvature_radius = 0.0f;
    }
  }

  // field types and members
  using _left_lane_type =
    geometry_msgs::msg::Polygon_<ContainerAllocator>;
  _left_lane_type left_lane;
  using _right_lane_type =
    geometry_msgs::msg::Polygon_<ContainerAllocator>;
  _right_lane_type right_lane;
  using _center_line_type =
    geometry_msgs::msg::Polygon_<ContainerAllocator>;
  _center_line_type center_line;
  using _lane_width_type =
    float;
  _lane_width_type lane_width;
  using _lane_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lane_type_type lane_type;
  using _lane_angle_type =
    float;
  _lane_angle_type lane_angle;
  using _curvature_radius_type =
    float;
  _curvature_radius_type curvature_radius;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__left_lane(
    const geometry_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->left_lane = _arg;
    return *this;
  }
  Type & set__right_lane(
    const geometry_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->right_lane = _arg;
    return *this;
  }
  Type & set__center_line(
    const geometry_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->center_line = _arg;
    return *this;
  }
  Type & set__lane_width(
    const float & _arg)
  {
    this->lane_width = _arg;
    return *this;
  }
  Type & set__lane_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lane_type = _arg;
    return *this;
  }
  Type & set__lane_angle(
    const float & _arg)
  {
    this->lane_angle = _arg;
    return *this;
  }
  Type & set__curvature_radius(
    const float & _arg)
  {
    this->curvature_radius = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lane_msgs::msg::LaneInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const lane_msgs::msg::LaneInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lane_msgs::msg::LaneInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lane_msgs::msg::LaneInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lane_msgs::msg::LaneInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lane_msgs::msg::LaneInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lane_msgs::msg::LaneInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lane_msgs::msg::LaneInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lane_msgs::msg::LaneInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lane_msgs::msg::LaneInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lane_msgs__msg__LaneInfo
    std::shared_ptr<lane_msgs::msg::LaneInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lane_msgs__msg__LaneInfo
    std::shared_ptr<lane_msgs::msg::LaneInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneInfo_ & other) const
  {
    if (this->left_lane != other.left_lane) {
      return false;
    }
    if (this->right_lane != other.right_lane) {
      return false;
    }
    if (this->center_line != other.center_line) {
      return false;
    }
    if (this->lane_width != other.lane_width) {
      return false;
    }
    if (this->lane_type != other.lane_type) {
      return false;
    }
    if (this->lane_angle != other.lane_angle) {
      return false;
    }
    if (this->curvature_radius != other.curvature_radius) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneInfo_

// alias to use template instance with default allocator
using LaneInfo =
  lane_msgs::msg::LaneInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lane_msgs

#endif  // LANE_MSGS__MSG__DETAIL__LANE_INFO__STRUCT_HPP_
