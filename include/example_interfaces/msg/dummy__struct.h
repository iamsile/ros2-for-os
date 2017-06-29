// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DUMMY__STRUCT_H_
#define EXAMPLE_INTERFACES__MSG__DUMMY__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message example_interfaces/Dummy
typedef struct example_interfaces__msg__Dummy
{
  bool dummy;
} example_interfaces__msg__Dummy;

/// Struct for an array of messages
typedef struct example_interfaces__msg__Dummy__Array
{
  example_interfaces__msg__Dummy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__msg__Dummy__Array;

#if __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__MSG__DUMMY__STRUCT_H_
