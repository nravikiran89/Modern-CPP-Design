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


int main()
{
    std::cout << "Running tests" << std::endl;
    STATIC_CHECK(2==2);
}