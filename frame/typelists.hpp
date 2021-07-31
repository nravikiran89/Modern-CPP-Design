/**
 * @file typelists.hpp
 * @author Ravi Kiran Nagaraj (ravikiran89@outlook.com)
 * @brief Define a typelist data structure
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef __TYPELISTS_HPP__
#define __TYPELISTS_HPP__

/**
 * @brief Base structure to define Typelists
 * 
 * @tparam H Head of the Typelist
 * @tparam T Tail of the Typelist
 */
template <typename H, typename T>
struct Typelist
{
    typedef H Head;
    typedef T Tail;
};

/**
 * @brief Namespace to define all Typelist related functions
 * 
 */
namespace tl
{

}

#endif /* __TYPELISTS_HPP__ */
