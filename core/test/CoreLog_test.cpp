#include <gtest/gtest.h>

#include "core/private_include/Paindor/CoreLog.hpp"

TEST(CoreLog, trace) {
    Paindor::CoreLog::trace("message");
}

TEST(CoreLog, debug) {
    Paindor::CoreLog::debug("message");
}

TEST(CoreLog, success) {
    Paindor::CoreLog::success("message");
}

TEST(CoreLog, info) {
    Paindor::CoreLog::info("message");
}

TEST(CoreLog, warning) {
    Paindor::CoreLog::warning("message");
}

TEST(CoreLog, error) {
    Paindor::CoreLog::error("message");
}

TEST(CoreLog, fatal) {
    Paindor::CoreLog::fatal("message");
}
