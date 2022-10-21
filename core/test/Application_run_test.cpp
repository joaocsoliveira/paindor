#include <gtest/gtest.h>

#include <Paindor/Paindor.hpp>

TEST(Application, Initialization) {
    Paindor::Application paindorApp;
    paindorApp.run();
}
