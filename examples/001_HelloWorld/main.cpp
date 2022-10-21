#include <Paindor/Paindor.hpp>

#include <memory>

class HelloPaindor : public Paindor::Application {
public:
    HelloPaindor() {
        Paindor::Log::info("HelloPaindor:: start");
    }
};

int main() {
    Paindor::Log::info("HelloPaindor start\n");
    auto helloPaindor = std::make_unique<HelloPaindor>();
    helloPaindor->run();
    Paindor::Log::info("HelloPaindor end\n");
}
