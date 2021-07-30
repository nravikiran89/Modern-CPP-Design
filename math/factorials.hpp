#ifndef __FACTORIALS_HPP__
#define __FACTORIALS_HPP__

/**
 * @brief Structure to compute factorial of a nu,=mber.
 * 
 * @tparam VAL - Value for which factorial has to be computed.
 */
template<unsigned int VAL>
struct factorial
{
    enum { value = VAL * factorial< VAL - 1U >::value};
};

/**
 * @brief Template specialization for factorial class.
 *        Returns 1 if template parameter passed is 0
 * 
 * @tparam  None.
 */
template<>
struct factorial<0U>
{
    enum { value = 1U };
};



#endif // __FACTORIALS_HPP__