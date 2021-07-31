/**
 * @file custom_assert.hpp
 * @author Ravi Kiran Nagaraj (ravikiran89@outlook.com)
 * @brief Defining compile time assert
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CUSTOM_ASSERT_HPP__
#define __CUSTOM_ASSERT_HPP__

/**
 * @brief Preprocessor define to wrap call to CompileTimeError
 * 
 */
#define STATIC_CHECK(expr) (CompileTimeError<(expr) != 0>())

/**
 * @brief Declaration of CompileTimeError structure that takes boolean as a template parameter
 * 
 * @tparam bool 
 */
template<bool>
struct CompileTimeError;

/**
 * @brief Template specialization of CompileTimeError with when template parameter resolved to true
 * 
 * @tparam  None
 */
template<>
struct CompileTimeError<true> {};


#endif /* __CUSTOM_ASSERT_HPP__ */
