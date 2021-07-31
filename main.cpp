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