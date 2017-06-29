# Copyright 2014-2015 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# generated from rmw_implementation/rmw_implementation-extras.cmake.in

find_package(rmw_implementation_cmake REQUIRED)
set(default_rmw_implementation "rmw_fastrtps_cpp")

if(NOT "${RMW_IMPLEMENTATION}" STREQUAL "")
  set(requested_default_rmw_implementation ${RMW_IMPLEMENTATION})
  if(NOT requested_default_rmw_implementation STREQUAL default_rmw_implementation)
    message(FATAL_ERROR
      "The default RMW implementation has been specified as "
      "'${requested_default_rmw_implementation}' through CMake,"
      "however the default RMW implementation which will be used is "
      "'${default_rmw_implementation}', which was specified when the "
      "'rmw_implementation' package was built.")
  endif()
endif()

if(NOT "$ENV{RMW_IMPLEMENTATION}" STREQUAL "")
  set(requested_default_rmw_implementation $ENV{RMW_IMPLEMENTATION})
  if(NOT requested_default_rmw_implementation STREQUAL default_rmw_implementation)
    message(FATAL_ERROR
      "The default RMW implementation has been specified as "
      "'${requested_default_rmw_implementation}' "
      "through the environment variable 'RMW_IMPLEMENTATION', "
      "however the default RMW implementation which will be used is "
      "'${default_rmw_implementation}', which was specified when the "
      "'rmw_implementation' package was built.")
  endif()
endif()


set(RMW_IMPLEMENTATION "${default_rmw_implementation}")
message(STATUS "Using RMW implementation '${RMW_IMPLEMENTATION}' as default")
find_package("${RMW_IMPLEMENTATION}" REQUIRED)

# TODO should never need definitions and include dirs?
list(APPEND rmw_implementation_DEFINITIONS ${${RMW_IMPLEMENTATION}_DEFINITIONS})
list(APPEND rmw_implementation_INCLUDE_DIRS ${${RMW_IMPLEMENTATION}_INCLUDE_DIRS})
list(APPEND rmw_implementation_LIBRARIES ${${RMW_IMPLEMENTATION}_LIBRARIES})
