/**
 * @file custom_assert.hpp
 * @author Ravi Kiran Nagaraj (ravikiran89@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CUSTOM_ASSERT_HPP__
#define __CUSTOM_ASSERT_HPP__


#define STATIC_CHECK(expr) (CompileTimeError<(expr) != 0>())

template<bool>
struct CompileTimeError;

template<>
struct CompileTimeError<true> {};


#endif /* __CUSTOM_ASSERT_HPP__ */
