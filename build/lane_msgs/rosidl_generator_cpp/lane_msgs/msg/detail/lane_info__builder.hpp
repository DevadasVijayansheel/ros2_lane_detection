// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lane_msgs:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_INFO__BUILDER_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lane_msgs/msg/detail/lane_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lane_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneInfo_stamp
{
public:
  explicit Init_LaneInfo_stamp(::lane_msgs::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  ::lane_msgs::msg::LaneInfo stamp(::lane_msgs::msg::LaneInfo::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lane_msgs::msg::LaneInfo msg_;
};

class Init_LaneInfo_curvature_radius
{
public:
  explicit Init_LaneInfo_curvature_radius(::lane_msgs::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_stamp curvature_radius(::lane_msgs::msg::LaneInfo::_curvature_radius_type arg)
  {
    msg_.curvature_radius = std::move(arg);
    return Init_LaneInfo_stamp(msg_);
  }

private:
  ::lane_msgs::msg::LaneInfo msg_;
};

class Init_LaneInfo_lane_angle
{
public:
  explicit Init_LaneInfo_lane_angle(::lane_msgs::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_curvature_radius lane_angle(::lane_msgs::msg::LaneInfo::_lane_angle_type arg)
  {
    msg_.lane_angle = std::move(arg);
    return Init_LaneInfo_curvature_radius(msg_);
  }

private:
  ::lane_msgs::msg::LaneInfo msg_;
};

class Init_LaneInfo_lane_type
{
public:
  explicit Init_LaneInfo_lane_type(::lane_msgs::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_lane_angle lane_type(::lane_msgs::msg::LaneInfo::_lane_type_type arg)
  {
    msg_.lane_type = std::move(arg);
    return Init_LaneInfo_lane_angle(msg_);
  }

private:
  ::lane_msgs::msg::LaneInfo msg_;
};

class Init_LaneInfo_lane_width
{
public:
  explicit Init_LaneInfo_lane_width(::lane_msgs::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_lane_type lane_width(::lane_msgs::msg::LaneInfo::_lane_width_type arg)
  {
    msg_.lane_width = std::move(arg);
    return Init_LaneInfo_lane_type(msg_);
  }

private:
  ::lane_msgs::msg::LaneInfo msg_;
};

class Init_LaneInfo_center_line
{
public:
  explicit Init_LaneInfo_center_line(::lane_msgs::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_lane_width center_line(::lane_msgs::msg::LaneInfo::_center_line_type arg)
  {
    msg_.center_line = std::move(arg);
    return Init_LaneInfo_lane_width(msg_);
  }

private:
  ::lane_msgs::msg::LaneInfo msg_;
};

class Init_LaneInfo_right_lane
{
public:
  explicit Init_LaneInfo_right_lane(::lane_msgs::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_center_line right_lane(::lane_msgs::msg::LaneInfo::_right_lane_type arg)
  {
    msg_.right_lane = std::move(arg);
    return Init_LaneInfo_center_line(msg_);
  }

private:
  ::lane_msgs::msg::LaneInfo msg_;
};

class Init_LaneInfo_left_lane
{
public:
  Init_LaneInfo_left_lane()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneInfo_right_lane left_lane(::lane_msgs::msg::LaneInfo::_left_lane_type arg)
  {
    msg_.left_lane = std::move(arg);
    return Init_LaneInfo_right_lane(msg_);
  }

private:
  ::lane_msgs::msg::LaneInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lane_msgs::msg::LaneInfo>()
{
  return lane_msgs::msg::builder::Init_LaneInfo_left_lane();
}

}  // namespace lane_msgs

#endif  // LANE_MSGS__MSG__DETAIL__LANE_INFO__BUILDER_HPP_
