#include <Paindor/Application.hpp>
#include <Paindor/Log.hpp>
#include <Paindor/CoreLog.hpp>

namespace Paindor {

    Application::Application() {
        CoreLog::core_success("Paindor::Application::start\n");
    }

    void Application::run() {
        CoreLog::core_info("Paindor::Application::run\n");
    }
}
