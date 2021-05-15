#include <iostream>
#include "gtest/gtest.h"

int add(int a, int b) {
    return a + b;
}

TEST(test, t0) { //NOLINT
    EXPECT_EQ(add(3, 2), 5);
}

TEST(test, t1) { //NOLINT
    EXPECT_TRUE(add(23, 12) == 35);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
