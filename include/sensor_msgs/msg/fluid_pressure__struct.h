// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__FLUID_PRESSURE__STRUCT_H_
#define SENSOR_MSGS__MSG__FLUID_PRESSURE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// header
#include "std_msgs/msg/header__struct.h"

/// Struct of message sensor_msgs/FluidPressure
typedef struct sensor_msgs__msg__FluidPressure
{
  std_msgs__msg__Header header;
  double fluid_pressure;
  double variance;
} sensor_msgs__msg__FluidPressure;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__FluidPressure__Array
{
  sensor_msgs__msg__FluidPressure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__FluidPressure__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__FLUID_PRESSURE__STRUCT_H_
