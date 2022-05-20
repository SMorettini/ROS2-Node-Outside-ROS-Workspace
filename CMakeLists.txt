project(node_outside_workspace)
cmake_minimum_required(VERSION 3.16)

include_directories(/opt/ros/foxy/include /opt/ros/foxy/lib)
link_directories(/opt/ros/foxy/lib)

add_executable(node_outside_workspace main.cpp)

target_link_libraries(node_outside_workspace
    -lrclcpp
    -lrcutils
    -lrcl
    -ltracetools
    -lstd_msgs__rosidl_typesupport_cpp
)
