#ifndef __PAINDOR_LOG_HPP__
#define __PAINDOR_LOG_HPP__

#include <string>

namespace Paindor {
    class Log {
    public:
        static void trace(const std::string msg);
        static void debug(const std::string msg);
        static void success(const std::string msg);
        static void info(const std::string msg);
        static void warning(const std::string msg);
        static void error(const std::string msg);
        static void fatal(const std::string msg);
    };
}

#endif
