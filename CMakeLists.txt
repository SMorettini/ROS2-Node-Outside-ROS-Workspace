project(your_node)
cmake_minimum_required(VERSION 3.16)

include_directories(/opt/ros/foxy/include /opt/ros/foxy/lib)

add_executable(your_node main.cpp)

target_link_libraries(your_node
-I/opt/ros/foxy/include 
-L/opt/ros/foxy/lib
rclcpp
std_msgs__rosidl_generator_c
std_msgs__rosidl_typesupport_introspection_c
std_msgs__rosidl_typesupport_c
std_msgs__python
std_msgs__rosidl_typesupport_introspection_cpp
std_msgs__rosidl_typesupport_fastrtps_c
std_msgs__rosidl_typesupport_connext_c
std_msgs__rosidl_typesupport_fastrtps_cpp
std_msgs__rosidl_typesupport_cpp
std_msgs__rosidl_typesupport_connext_cpp

# -lroscpp 
# -lrostime 
# -lrosconsole 
rcutils
rcl
tracetools
)