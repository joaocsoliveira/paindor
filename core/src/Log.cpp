#include <Paindor/Log.hpp>
#include "core/private_include/Paindor/CoreLog.hpp"

#include <boost/log/trivial.hpp>

namespace Paindor {

    void Log::trace(const std::string &msg) {
        CoreLog::real_trace(CoreLog::CLIENT_SOURCE, msg);
    }

    void Log::debug(const std::string &msg) {
        CoreLog::real_debug(CoreLog::CLIENT_SOURCE, msg);
    }

    void Log::success(const std::string &msg) {
        CoreLog::real_success(CoreLog::CLIENT_SOURCE, msg);
    }

    void Log::info(const std::string &msg) {
        CoreLog::real_info(CoreLog::CLIENT_SOURCE, msg);
    }

    void Log::warning(const std::string &msg) {
        CoreLog::real_warning(CoreLog::CLIENT_SOURCE, msg);
    }

    void Log::error(const std::string &msg) {
        CoreLog::real_error(CoreLog::CLIENT_SOURCE, msg);
    }

    void Log::fatal(const std::string &msg) {
        CoreLog::real_fatal(CoreLog::CLIENT_SOURCE, msg);
    }
}
