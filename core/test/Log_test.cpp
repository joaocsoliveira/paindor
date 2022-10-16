#include <gtest/gtest.h>

#include <Paindor/Log.hpp>

TEST(Log, trace) {
    Paindor::Log::trace("message");
}

TEST(Log, debug) {
    Paindor::Log::debug("message");
}

TEST(Log, success) {
    Paindor::Log::success("message");
}

TEST(Log, info) {
    Paindor::Log::info("message");
}

TEST(Log, warning) {
    Paindor::Log::warning("message");
}

TEST(Log, error) {
    Paindor::Log::error("message");
}

TEST(Log, fatal) {
    Paindor::Log::fatal("message");
}
