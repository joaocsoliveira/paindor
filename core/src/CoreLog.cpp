#include "core/private_include/Paindor/CoreLog.hpp"

#include <boost/log/trivial.hpp>

namespace Paindor {

    const std::string CoreLog::CORE_SOURCE = "core";
    const std::string CoreLog::CLIENT_SOURCE = "client";

    void CoreLog::real_trace(const std::string &source, const std::string &msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;2m [" << source << "] " << msg << "\033[0m";
    }

    void CoreLog::real_debug(const std::string &source, const std::string &msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;30m [" << source << "] " << msg << "\033[0m";
    }

    void CoreLog::real_success(const std::string &source, const std::string &msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;32m [" << source << "] " << msg << "\033[0m";
    }

    void CoreLog::real_info(const std::string &source, const std::string &msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;34m [" << source << "] " << msg << "\033[0m";
    }

    void CoreLog::real_warning(const std::string &source, const std::string &msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;33m [" << source << "] " << msg << "\033[0m";
    }

    void CoreLog::real_error(const std::string &source, const std::string &msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;31m [" << source << "] " << msg << "\033[0m";
    }

    void CoreLog::real_fatal(const std::string &source, const std::string &msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;7m [" << source << "] " << msg << "\033[0m";
    }

    void CoreLog::trace(const std::string &msg) {
        real_trace(CORE_SOURCE, msg);
    }

    void CoreLog::debug(const std::string &msg) {
        real_debug(CORE_SOURCE, msg);
    }

    void CoreLog::success(const std::string &msg) {
        real_success(CORE_SOURCE, msg);
    }

    void CoreLog::info(const std::string &msg) {
        real_info(CORE_SOURCE, msg);
    }

    void CoreLog::warning(const std::string &msg) {
        real_warning(CORE_SOURCE, msg);
    }

    void CoreLog::error(const std::string &msg) {
        real_error(CORE_SOURCE, msg);
    }

    void CoreLog::fatal(const std::string &msg) {
        real_fatal(CORE_SOURCE, msg);
    }
}
