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

TEST(test_factorial, check_when_0)
{
    ASSERT_EQ(factorial<0>::value, 1U);
}

TEST(test_factorial, check_when_1)
{
    ASSERT_EQ(factorial<1>::value, 1U);
} 

TEST(test_factorial, check_when_other_unsigned_Value)
{
    ASSERT_EQ(factorial<5>::value, 5U*4U*3U*2U*1U);
} 

TEST(test_power, check_when_exponent_is_0)
{
    unsigned int long ret = custom::math::power<4U, 0U>::value;
    ASSERT_EQ(ret, 1U);
}

TEST(test_power, check_when_exponent_is_1)
{
    unsigned int long ret = custom::math::power<4U, 1U>::value;
    ASSERT_EQ(ret, 4U);
}

TEST(test_power, check_when_base_is_0)
{
    unsigned int long ret = custom::math::power<0U, 5U>::value;
    ASSERT_EQ(ret, 1U);
}

TEST(test_power, check_when_base_is_1)
{
    unsigned int long ret = custom::math::power<1U, 5U>::value;
    ASSERT_EQ(ret, 1U);
}

TEST(test_power, check_when_base_exponent_are_not_0_or_1)
{
    unsigned int long ret = custom::math::power<5U, 3U>::value;
    ASSERT_EQ(ret, 125U);
}

TEST(test_typelist_length, check_when_typelist_has_only_NullType)
{
    typedef Typelist<NullType, NullType> types;

    ASSERT_NE(tl::length::Length<types>::value, 0);
}

TEST(test_typelist_length, check_when_typelist_has_multiple_types)
{
    typedef TYPELIST_3(char, int, float) types;

    ASSERT_EQ(tl::length::Length<types>::value, 3);
}