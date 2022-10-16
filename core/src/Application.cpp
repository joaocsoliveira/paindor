#include <Paindor/Application.hpp>

#include <iostream>

namespace Paindor {

    Application::Application() {
        std::cout << "Paindor::Application::start\n";
    }

    void Application::run() {
        std::cout << "Paindor::Application::run\n";
    }
}
