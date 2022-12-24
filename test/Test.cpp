#include <gtest/gtest.h>
#include "../src/abc.hpp"


// Test fixture
class BASE_TEST_SUITE : public testing::Test {
    void SetUp() override {
    }

    void TearDown() override {
    }
};

// Derived test
TEST_F(BASE_TEST_SUITE, ExmapleTest) { 
        EXPECT_EQ(1, 0) << "Derived test 111";
}

// Standalone test
TEST(SAMPLE_TEST_SUITE, ExmapleTest) { 
    EXPECT_TRUE(false) << "Standalone test 222";
    EXPECT_EQ(1, 0) << "Standalone test 333";
}
