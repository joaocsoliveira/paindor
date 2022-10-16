#include <Paindor/Paindor.hpp>

#include <iostream>
#include <memory>

class HelloPaindor : public Paindor::Application {
public:
    HelloPaindor() {
        std::cout << "HelloPaindor:: start\n";
    }

    HelloPaindor(const HelloPaindor&) = delete;
    HelloPaindor& operator=(const HelloPaindor&) = delete;
    HelloPaindor(HelloPaindor&&) = delete;
    HelloPaindor& operator=(HelloPaindor&&) = delete;
};

int main() {
    std::cout << "HelloPaindor start\n";
    auto helloPaindor = std::make_unique<HelloPaindor>();
    helloPaindor->run();
    std::cout << "HelloPaindor end\n";
}
