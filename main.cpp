#include <chrono>
#include <functional>
#include <memory>
#include <string>


#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

#include <trajectory_msgs/msg/joint_trajectory.hpp>

class MyNode : public rclcpp::Node
{
public:
    MyNode() : Node("my_publisher_node")
    {
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(500),
            std::bind(&MyNode::timerCallback, this));
        publisher_ = this->create_publisher<std_msgs::msg::String>("hello_world_topic", 10);
    }
private:
    void timerCallback()
    {
        auto message = std_msgs::msg::String();
        message.data = "Hello, world! " + std::to_string(count_++);
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
        publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    size_t count_;
};
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MyNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
