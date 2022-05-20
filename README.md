# ROS2-Node-Outside-ROS-Workspace

Simple example of ROS2 node created outside the ROS worskpace.

# Setup

 0. If it is not installed, [install ROS2](https://docs.ros.org/en/foxy/Installation.html). The code is tested with Foxy but it should also work for other version of ROS2. If you tried with other versions feel free to make a pull request to update this README. 
 1. Clone the repository
 2. Build the code
 ```
 source /opt/ros/foxy/setup.sh
 cd ROS2-Node-Outside-ROS-Workspace
 mkdir build
 cd build
 cmake ..
 make
 ```
 3. Run the node `./node_outside_workspace`
 4. Subscribe to the topic with the command line to see the message published:
 `ros2 topic  echo /hello_worldopic`
