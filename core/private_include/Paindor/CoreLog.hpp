#ifndef __PAINDOR_CORE_LOG_HPP__
#define __PAINDOR_CORE_LOG_HPP__

#include <string>

namespace Paindor {
    class CoreLog {
    public:
        static void core_trace(const std::string msg);
        static void core_debug(const std::string msg);
        static void core_success(const std::string msg);
        static void core_info(const std::string msg);
        static void core_warning(const std::string msg);
        static void core_error(const std::string msg);
        static void core_fatal(const std::string msg);
    
        static void real_trace(const std::string msg);
        static void real_debug(const std::string msg);
        static void real_success(const std::string msg);
        static void real_info(const std::string msg);
        static void real_warning(const std::string msg);
        static void real_error(const std::string msg);
        static void real_fatal(const std::string msg);
    };
}

#endif
