# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_examples_rclcpp_minimal_timer_CONFIG_INCLUDED)
  return()
endif()
set(_examples_rclcpp_minimal_timer_CONFIG_INCLUDED TRUE)

# output package information
if(NOT examples_rclcpp_minimal_timer_FIND_QUIETLY)
  message(STATUS "Found examples_rclcpp_minimal_timer: 0.0.0 (${examples_rclcpp_minimal_timer_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'examples_rclcpp_minimal_timer' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(examples_rclcpp_minimal_timer_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${examples_rclcpp_minimal_timer_DIR}/${_extra}")
endforeach()
