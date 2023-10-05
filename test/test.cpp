#include <gtest/gtest.h>
#include "PIDController.hpp"

TEST(PIDControllerTest, Compute) {
    PIDController pid(1.0, 0.1, 0.01);

    // Test case 1: Target and actual velocity are equal
    double result1 = pid.compute(10.0, 10.0);
    EXPECT_NEAR(result1, 0.0, 0.1);

    // Test case 2: Target velocity is higher than actual
    double result2 = pid.compute(20.0, 15.0);
    EXPECT_NEAR(result2, 5.6, 0.1);
}