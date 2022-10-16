#include <Paindor/Log.hpp>
#include <Paindor/CoreLog.hpp>

#include <boost/log/trivial.hpp>

namespace Paindor {

    void Log::trace(const std::string msg) {
        CoreLog::real_trace("[client] " + msg);
    }

    void Log::debug(const std::string msg) {
        CoreLog::real_debug("[client] " + msg);
    }

    void Log::success(const std::string msg) {
        CoreLog::real_success("[client] " + msg);
    }

    void Log::info(const std::string msg) {
        CoreLog::real_info("[client] " + msg);
    }

    void Log::warning(const std::string msg) {
        CoreLog::real_warning("[client] " + msg);
    }

    void Log::error(const std::string msg) {
        CoreLog::real_error("[client] " + msg);
    }

    void Log::fatal(const std::string msg) {
        CoreLog::real_fatal("[client] " + msg);
    }
}
