// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__TRIGGER__RESPONSE__TRAITS_HPP_
#define STD_SRVS__SRV__TRIGGER__RESPONSE__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "std_srvs/srv/trigger__response__struct.hpp"


template<>
struct has_fixed_size<std_srvs::srv::Trigger_Response>
  : std::integral_constant<bool, false>{};

}  // namespace rosidl_generator_traits

#endif  // STD_SRVS__SRV__TRIGGER__RESPONSE__TRAITS_HPP_
