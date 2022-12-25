#include <gtest/gtest.h>
#include "../src/abc.hpp"

// Test fixture
struct BaseTestSuite : public testing::Test {
    void SetUp() override {
    }

    void TearDown() override {
    }
};

// Derived test
TEST_F(BaseTestSuite, ExmapleTest) { 
        EXPECT_EQ(111, 111) << "Derived test";
}

// Standalone test
TEST(SAMPLE_TEST_SUITE, ExmapleTest) { 
    EXPECT_EQ(22, 22) << "Standalone test";
}
