#include <Paindor/Application.hpp>
#include <Paindor/Log.hpp>
#include "core/private_include/Paindor/CoreLog.hpp"

namespace Paindor {

    Application::Application() {
        CoreLog::success("Paindor::Application::start\n");
    }

    void Application::run() const {
        CoreLog::info("Paindor::Application::run\n");
    }
}
