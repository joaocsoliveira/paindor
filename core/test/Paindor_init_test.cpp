#include <gtest/gtest.h>

#include <Paindor.hpp>

TEST(Paindor, Initialization) {
    Paindor paindor;

    ASSERT_TRUE(paindor.getText().empty());
    paindor.init();
    ASSERT_EQ("Hello World!", paindor.getText());
}
