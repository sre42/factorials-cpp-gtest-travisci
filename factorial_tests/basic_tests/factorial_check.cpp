//
// Created by Omar Shaikh on 2/8/16.
//

#include "gtest/gtest.h"
#include "factorial.h"

TEST(factorialTest,positiveNos){
    EXPECT_EQ(24,factorial(4));
    EXPECT_EQ(120,factorial(5));
    EXPECT_EQ(720,factorial(6));
}

TEST(factorialTest,zeros){
    EXPECT_EQ(1,factorial(0));
}