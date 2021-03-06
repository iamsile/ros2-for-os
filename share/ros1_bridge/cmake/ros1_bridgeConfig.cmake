# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_ros1_bridge_CONFIG_INCLUDED)
  return()
endif()
set(_ros1_bridge_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ros1_bridge_FIND_QUIETLY)
  message(STATUS "Found ros1_bridge: 0.0.0 (${ros1_bridge_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ros1_bridge' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ros1_bridge_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${ros1_bridge_DIR}/${_extra}")
endforeach()
