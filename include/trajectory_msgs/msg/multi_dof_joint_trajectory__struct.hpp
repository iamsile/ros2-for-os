// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY__STRUCT_HPP_
#define TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include "std_msgs/msg/header.hpp"  // header
#include "trajectory_msgs/msg/multi_dof_joint_trajectory_point.hpp"  // points

#ifndef _WIN32
# define DEPRECATED_trajectory_msgs_msg_MultiDOFJointTrajectory __attribute__((deprecated))
#else
# define DEPRECATED_trajectory_msgs_msg_MultiDOFJointTrajectory __declspec(deprecated)
#endif

namespace trajectory_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiDOFJointTrajectory_
{
  using Type = MultiDOFJointTrajectory_<ContainerAllocator>;

  MultiDOFJointTrajectory_()
  {
  }
  explicit MultiDOFJointTrajectory_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : joint_names(_alloc),
    points(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _joint_names_type =
      std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _joint_names_type joint_names;
  using _points_type =
      std::vector<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>>::other>;
  _points_type points;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->joint_names = _arg;
    return this;
  }
  Type * set__points(
    const std::vector<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>>::other> & _arg)
  {
    this->points = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
      const trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_trajectory_msgs_msg_MultiDOFJointTrajectory
    std::shared_ptr<trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_trajectory_msgs_msg_MultiDOFJointTrajectory
    std::shared_ptr<trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiDOFJointTrajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiDOFJointTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiDOFJointTrajectory_

// alias to use template instance with default allocator
using MultiDOFJointTrajectory =
    trajectory_msgs::msg::MultiDOFJointTrajectory_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace trajectory_msgs

#endif  // TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY__STRUCT_HPP_
