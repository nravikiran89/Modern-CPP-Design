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

#include "NullType.hpp"

/**
 * @brief Preprocessor defines to wrap around Typelist structure
 * 
 */
#define TYPELIST_1(T1)              Typelist<T1, NullType>
#define TYPELIST_2(T1, T2)          Typelist<T1, TYPELIST_1(T2) >
#define TYPELIST_3(T1, T2, T3)      Typelist<T1, TYPELIST_2(T2, T3) >
#define TYPELIST_4(T1, T2, T3, T4)  Typelist<T1, TYPELIST_3(T2, T3, T4) >
// .. and so on

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
    namespace length
    {
        /**
         * @brief Declaration for computing length of Typelist
         * 
         * @tparam LIST Input Typelist struct
         */
        template <typename LIST> struct Length;

        /**
         * @brief Template specialization for Length is NullType whose value is 0
         * 
         * @tparam  NullType
         */
        template <>
        struct Length<NullType>
        {
            enum { value = 0 };
        };
        
        /**
         * @brief Definition for computing length of Typelist
         * 
         * @tparam H 
         * @tparam T 
         */
        template <typename H, typename T>
        struct Length < Typelist<H, T> >
        {
            enum { value = 1 + Length<T>::value };
        };
    }
}

#endif /* __TYPELISTS_HPP__ */
