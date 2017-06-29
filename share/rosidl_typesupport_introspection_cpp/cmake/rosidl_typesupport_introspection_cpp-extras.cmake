# generated from
# rosidl_typesupport_introspection_cpp/
#   rosidl_typesupport_introspection_cpp-extras.cmake.in

find_package(ament_cmake_core QUIET REQUIRED)
# TODO
# instead of being an extension for "rosidl_generate_interfaces"
# this should be an extension of "rosidl_generator_cpp"
# which can then ensure that there is only one
ament_register_extension(
  "rosidl_generate_interfaces"
  "rosidl_typesupport_introspection_cpp"
  "rosidl_typesupport_introspection_cpp_generate_interfaces.cmake")

set(rosidl_typesupport_introspection_cpp_BIN
  "${rosidl_typesupport_introspection_cpp_DIR}/../../../lib/rosidl_typesupport_introspection_cpp/rosidl_typesupport_introspection_cpp")
normalize_path(rosidl_typesupport_introspection_cpp_BIN
  "${rosidl_typesupport_introspection_cpp_BIN}")

set(rosidl_typesupport_introspection_cpp_GENERATOR_FILES
  "${rosidl_typesupport_introspection_cpp_DIR}/../../../lib/python3.5/site-packages/rosidl_typesupport_introspection_cpp/__init__.py")
normalize_path(rosidl_typesupport_introspection_cpp_GENERATOR_FILES
  "${rosidl_typesupport_introspection_cpp_GENERATOR_FILES}")

set(rosidl_typesupport_introspection_cpp_TEMPLATE_DIR
  "${rosidl_typesupport_introspection_cpp_DIR}/../resource")
normalize_path(rosidl_typesupport_introspection_cpp_TEMPLATE_DIR
  "${rosidl_typesupport_introspection_cpp_TEMPLATE_DIR}")
