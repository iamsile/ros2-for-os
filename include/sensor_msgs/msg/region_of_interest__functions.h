// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__REGION_OF_INTEREST__FUNCTIONS_H_
#define SENSOR_MSGS__MSG__REGION_OF_INTEREST__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "sensor_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sensor_msgs/msg/region_of_interest__struct.h"

/// Initialize sensor_msgs/RegionOfInterest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(sensor_msgs__msg__RegionOfInterest)) before
 * or use sensor_msgs__msg__RegionOfInterest__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__RegionOfInterest__init(sensor_msgs__msg__RegionOfInterest * msg);

/// Finalize sensor_msgs/RegionOfInterest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__RegionOfInterest__fini(sensor_msgs__msg__RegionOfInterest * msg);

/// Create sensor_msgs/RegionOfInterest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls sensor_msgs__msg__RegionOfInterest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
sensor_msgs__msg__RegionOfInterest *
sensor_msgs__msg__RegionOfInterest__create();

/// Destroy sensor_msgs/RegionOfInterest message.
/**
 * It calls sensor_msgs__msg__RegionOfInterest__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__RegionOfInterest__destroy(sensor_msgs__msg__RegionOfInterest * msg);


/// Initialize array of sensor_msgs/RegionOfInterest messages.
/**
 * It allocates the memory for the number of elements and
 * calls sensor_msgs__msg__RegionOfInterest__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__RegionOfInterest__Array__init(sensor_msgs__msg__RegionOfInterest__Array * array, size_t size);

/// Finalize array of sensor_msgs/RegionOfInterest messages.
/**
 * It calls sensor_msgs__msg__RegionOfInterest__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__RegionOfInterest__Array__fini(sensor_msgs__msg__RegionOfInterest__Array * array);

/// Create array of sensor_msgs/RegionOfInterest messages.
/**
 * It allocates the memory for the array and
 * calls sensor_msgs__msg__RegionOfInterest__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
sensor_msgs__msg__RegionOfInterest__Array *
sensor_msgs__msg__RegionOfInterest__Array__create(size_t size);

/// Destroy array of sensor_msgs/RegionOfInterest messages.
/**
 * It calls sensor_msgs__msg__RegionOfInterest__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__RegionOfInterest__Array__destroy(sensor_msgs__msg__RegionOfInterest__Array * array);

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__REGION_OF_INTEREST__FUNCTIONS_H_
