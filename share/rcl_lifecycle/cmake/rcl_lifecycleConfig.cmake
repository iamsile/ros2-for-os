# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_rcl_lifecycle_CONFIG_INCLUDED)
  return()
endif()
set(_rcl_lifecycle_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rcl_lifecycle_FIND_QUIETLY)
  message(STATUS "Found rcl_lifecycle: 0.0.0 (${rcl_lifecycle_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rcl_lifecycle' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rcl_lifecycle_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rcl_lifecycle-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${rcl_lifecycle_DIR}/${_extra}")
endforeach()
