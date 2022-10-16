#include <Paindor/CoreLog.hpp>

#include <boost/log/trivial.hpp>

namespace Paindor {

    void CoreLog::real_trace(const std::string msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;2m" << msg << "\033[0m";
    }

    void CoreLog::real_debug(const std::string msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;30m" << msg << "\033[0m";
    }

    void CoreLog::real_success(const std::string msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;32m" << msg << "\033[0m";
    }

    void CoreLog::real_info(const std::string msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;34m" << msg << "\033[0m";
    }

    void CoreLog::real_warning(const std::string msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;33m" << msg << "\033[0m";
    }

    void CoreLog::real_error(const std::string msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;31m" << msg << "\033[0m";
    }

    void CoreLog::real_fatal(const std::string msg) {
        BOOST_LOG_TRIVIAL(info) << "\033[1;7m" << msg << "\033[0m";
    }

    void CoreLog::core_trace(const std::string msg) {
        real_trace("[core] " + msg);
    }

    void CoreLog::core_debug(const std::string msg) {
        real_debug("[core] " + msg);
    }

    void CoreLog::core_success(const std::string msg) {
        real_success("[core] " + msg);
    }

    void CoreLog::core_info(const std::string msg) {
        real_info("[core] " + msg);
    }

    void CoreLog::core_warning(const std::string msg) {
        real_warning("[core] " + msg);
    }

    void CoreLog::core_error(const std::string msg) {
        real_error("[core] " + msg);
    }

    void CoreLog::core_fatal(const std::string msg) {
        real_fatal("[core] " + msg);
    }
}
