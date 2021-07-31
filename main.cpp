/**
 * @file main.cpp
 * @author Ravi Kiran Nagaraj (ravikiran89@outlook.com)
 * @brief Contains tests for the functions defined in the library.
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

#include "math/powers.hpp"
#include "math/factorials.hpp"
#include "frame/custom_assert.hpp"
#include "frame/typelists.hpp"

#include "gtest/gtest.h"

TEST(test_factorial, test_Case_001)
{
    ASSERT_EQ(factorial<4>::value, 4U*3U*2U*1U);
}

TEST(test_factorial, test_Case_002)
{
    ASSERT_EQ(factorial<5>::value, 4U*3U*2U*1U);
} 