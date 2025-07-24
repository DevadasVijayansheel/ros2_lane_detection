// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lane_msgs:msg/LaneInfo.idl
// generated code does not contain a copyright notice
#include "lane_msgs/msg/detail/lane_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `left_lane`
// Member `right_lane`
// Member `center_line`
#include "geometry_msgs/msg/detail/polygon__functions.h"
// Member `lane_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
lane_msgs__msg__LaneInfo__init(lane_msgs__msg__LaneInfo * msg)
{
  if (!msg) {
    return false;
  }
  // left_lane
  if (!geometry_msgs__msg__Polygon__init(&msg->left_lane)) {
    lane_msgs__msg__LaneInfo__fini(msg);
    return false;
  }
  // right_lane
  if (!geometry_msgs__msg__Polygon__init(&msg->right_lane)) {
    lane_msgs__msg__LaneInfo__fini(msg);
    return false;
  }
  // center_line
  if (!geometry_msgs__msg__Polygon__init(&msg->center_line)) {
    lane_msgs__msg__LaneInfo__fini(msg);
    return false;
  }
  // lane_width
  // lane_type
  if (!rosidl_runtime_c__String__init(&msg->lane_type)) {
    lane_msgs__msg__LaneInfo__fini(msg);
    return false;
  }
  // lane_angle
  // curvature_radius
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    lane_msgs__msg__LaneInfo__fini(msg);
    return false;
  }
  return true;
}

void
lane_msgs__msg__LaneInfo__fini(lane_msgs__msg__LaneInfo * msg)
{
  if (!msg) {
    return;
  }
  // left_lane
  geometry_msgs__msg__Polygon__fini(&msg->left_lane);
  // right_lane
  geometry_msgs__msg__Polygon__fini(&msg->right_lane);
  // center_line
  geometry_msgs__msg__Polygon__fini(&msg->center_line);
  // lane_width
  // lane_type
  rosidl_runtime_c__String__fini(&msg->lane_type);
  // lane_angle
  // curvature_radius
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
lane_msgs__msg__LaneInfo__are_equal(const lane_msgs__msg__LaneInfo * lhs, const lane_msgs__msg__LaneInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_lane
  if (!geometry_msgs__msg__Polygon__are_equal(
      &(lhs->left_lane), &(rhs->left_lane)))
  {
    return false;
  }
  // right_lane
  if (!geometry_msgs__msg__Polygon__are_equal(
      &(lhs->right_lane), &(rhs->right_lane)))
  {
    return false;
  }
  // center_line
  if (!geometry_msgs__msg__Polygon__are_equal(
      &(lhs->center_line), &(rhs->center_line)))
  {
    return false;
  }
  // lane_width
  if (lhs->lane_width != rhs->lane_width) {
    return false;
  }
  // lane_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lane_type), &(rhs->lane_type)))
  {
    return false;
  }
  // lane_angle
  if (lhs->lane_angle != rhs->lane_angle) {
    return false;
  }
  // curvature_radius
  if (lhs->curvature_radius != rhs->curvature_radius) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
lane_msgs__msg__LaneInfo__copy(
  const lane_msgs__msg__LaneInfo * input,
  lane_msgs__msg__LaneInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // left_lane
  if (!geometry_msgs__msg__Polygon__copy(
      &(input->left_lane), &(output->left_lane)))
  {
    return false;
  }
  // right_lane
  if (!geometry_msgs__msg__Polygon__copy(
      &(input->right_lane), &(output->right_lane)))
  {
    return false;
  }
  // center_line
  if (!geometry_msgs__msg__Polygon__copy(
      &(input->center_line), &(output->center_line)))
  {
    return false;
  }
  // lane_width
  output->lane_width = input->lane_width;
  // lane_type
  if (!rosidl_runtime_c__String__copy(
      &(input->lane_type), &(output->lane_type)))
  {
    return false;
  }
  // lane_angle
  output->lane_angle = input->lane_angle;
  // curvature_radius
  output->curvature_radius = input->curvature_radius;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

lane_msgs__msg__LaneInfo *
lane_msgs__msg__LaneInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lane_msgs__msg__LaneInfo * msg = (lane_msgs__msg__LaneInfo *)allocator.allocate(sizeof(lane_msgs__msg__LaneInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lane_msgs__msg__LaneInfo));
  bool success = lane_msgs__msg__LaneInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lane_msgs__msg__LaneInfo__destroy(lane_msgs__msg__LaneInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lane_msgs__msg__LaneInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lane_msgs__msg__LaneInfo__Sequence__init(lane_msgs__msg__LaneInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lane_msgs__msg__LaneInfo * data = NULL;

  if (size) {
    data = (lane_msgs__msg__LaneInfo *)allocator.zero_allocate(size, sizeof(lane_msgs__msg__LaneInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lane_msgs__msg__LaneInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lane_msgs__msg__LaneInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lane_msgs__msg__LaneInfo__Sequence__fini(lane_msgs__msg__LaneInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lane_msgs__msg__LaneInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lane_msgs__msg__LaneInfo__Sequence *
lane_msgs__msg__LaneInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lane_msgs__msg__LaneInfo__Sequence * array = (lane_msgs__msg__LaneInfo__Sequence *)allocator.allocate(sizeof(lane_msgs__msg__LaneInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lane_msgs__msg__LaneInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lane_msgs__msg__LaneInfo__Sequence__destroy(lane_msgs__msg__LaneInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lane_msgs__msg__LaneInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lane_msgs__msg__LaneInfo__Sequence__are_equal(const lane_msgs__msg__LaneInfo__Sequence * lhs, const lane_msgs__msg__LaneInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lane_msgs__msg__LaneInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lane_msgs__msg__LaneInfo__Sequence__copy(
  const lane_msgs__msg__LaneInfo__Sequence * input,
  lane_msgs__msg__LaneInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lane_msgs__msg__LaneInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lane_msgs__msg__LaneInfo * data =
      (lane_msgs__msg__LaneInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lane_msgs__msg__LaneInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lane_msgs__msg__LaneInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lane_msgs__msg__LaneInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
