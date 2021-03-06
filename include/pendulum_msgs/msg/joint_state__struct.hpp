// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef PENDULUM_MSGS__MSG__JOINT_STATE__STRUCT_HPP_
#define PENDULUM_MSGS__MSG__JOINT_STATE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED_pendulum_msgs_msg_JointState __attribute__((deprecated))
#else
# define DEPRECATED_pendulum_msgs_msg_JointState __declspec(deprecated)
#endif

namespace pendulum_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointState_
{
  using Type = JointState_<ContainerAllocator>;

  JointState_()
  {
  }
  explicit JointState_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _position_type =
      double;
  _position_type position;
  using _velocity_type =
      double;
  _velocity_type velocity;
  using _effort_type =
      double;
  _effort_type effort;

  // setters for named parameter idiom
  Type * set__position(
    const double & _arg)
  {
    this->position = _arg;
    return this;
  }
  Type * set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return this;
  }
  Type * set__effort(
    const double & _arg)
  {
    this->effort = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      pendulum_msgs::msg::JointState_<ContainerAllocator> *;
  using ConstRawPtr =
      const pendulum_msgs::msg::JointState_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<pendulum_msgs::msg::JointState_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<pendulum_msgs::msg::JointState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    pendulum_msgs::msg::JointState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<pendulum_msgs::msg::JointState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    pendulum_msgs::msg::JointState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<pendulum_msgs::msg::JointState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<pendulum_msgs::msg::JointState_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<pendulum_msgs::msg::JointState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_pendulum_msgs_msg_JointState
    std::shared_ptr<pendulum_msgs::msg::JointState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_pendulum_msgs_msg_JointState
    std::shared_ptr<pendulum_msgs::msg::JointState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointState_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->effort != other.effort) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointState_

// alias to use template instance with default allocator
using JointState =
    pendulum_msgs::msg::JointState_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace pendulum_msgs

#endif  // PENDULUM_MSGS__MSG__JOINT_STATE__STRUCT_HPP_
