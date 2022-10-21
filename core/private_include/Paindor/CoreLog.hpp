#ifndef __PAINDOR_CORE_LOG_HPP__
#define __PAINDOR_CORE_LOG_HPP__

#include <string>

namespace Paindor {
    class CoreLog {
    public:
        static const std::string CORE_SOURCE;
        static const std::string CLIENT_SOURCE;

        static void trace(const std::string &msg);
        static void debug(const std::string &msg);
        static void success(const std::string &msg);
        static void info(const std::string &msg);
        static void warning(const std::string &msg);
        static void error(const std::string &msg);
        static void fatal(const std::string &msg);
    
        static void real_trace(const std::string &source, const std::string &msg);
        static void real_debug(const std::string &source, const std::string &msg);
        static void real_success(const std::string &source, const std::string &msg);
        static void real_info(const std::string &source, const std::string &msg);
        static void real_warning(const std::string &source, const std::string &msg);
        static void real_error(const std::string &source, const std::string &msg);
        static void real_fatal(const std::string &source, const std::string &msg);
    };
}

#endif
