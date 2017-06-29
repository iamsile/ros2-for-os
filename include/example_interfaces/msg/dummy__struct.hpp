// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DUMMY__STRUCT_HPP_
#define EXAMPLE_INTERFACES__MSG__DUMMY__STRUCT_HPP_

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
# define DEPRECATED_example_interfaces_msg_Dummy __attribute__((deprecated))
#else
# define DEPRECATED_example_interfaces_msg_Dummy __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Dummy_
{
  using Type = Dummy_<ContainerAllocator>;

  Dummy_()
  {
  }
  explicit Dummy_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _dummy_type =
      bool;
  _dummy_type dummy;

  // setters for named parameter idiom
  Type * set__dummy(
    const bool & _arg)
  {
    this->dummy = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      example_interfaces::msg::Dummy_<ContainerAllocator> *;
  using ConstRawPtr =
      const example_interfaces::msg::Dummy_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<example_interfaces::msg::Dummy_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<example_interfaces::msg::Dummy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    example_interfaces::msg::Dummy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<example_interfaces::msg::Dummy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    example_interfaces::msg::Dummy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<example_interfaces::msg::Dummy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<example_interfaces::msg::Dummy_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<example_interfaces::msg::Dummy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_example_interfaces_msg_Dummy
    std::shared_ptr<example_interfaces::msg::Dummy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_example_interfaces_msg_Dummy
    std::shared_ptr<example_interfaces::msg::Dummy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dummy_ & other) const
  {
    if (this->dummy != other.dummy) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dummy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dummy_

// alias to use template instance with default allocator
using Dummy =
    example_interfaces::msg::Dummy_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__MSG__DUMMY__STRUCT_HPP_
