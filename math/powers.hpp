#ifndef __MATH_POWERS_HPP__
#define __MATH_POWERS_HPP__

namespace custom
{
    namespace math
    {
        /**
         * @brief Structure to compute powers of an integer value.
         *        Computes (BASE ** Exponent) during compile time.
         * 
         * @tparam BASE         - Base value
         * @tparam EXPONENT     - Integer Value
         */
        template<unsigned int BASE, unsigned int EXPONENT>
        struct power
        {
            enum { value = BASE * power<BASE, EXPONENT - 1U>::value };
        };

        /**
         * @brief Partial template specialization of power structure.
         *        Return 1 if the exponent passed is 0
         * 
         * @tparam BASE         - Base value
         */
        template<unsigned int BASE>
        struct power<BASE, 0U>
        {
            enum { value = 1U };
        };

        /**
         * @brief Partial template specialization of power structure.
         *        Return 1 if the base passed is 0
         * 
         * @tparam BASE         - Base value
         */
        template<unsigned int EXPONENT>
        struct power<0U, EXPONENT>
        {
            enum { value = 1U };
        };

        /**
         * @brief Partial template specialization of power structure.
         *        Return 1 if the base passed is 1
         * 
         * @tparam BASE         - Base value
         */
        template<unsigned int EXPONENT>
        struct power<1U, EXPONENT>
        {
            enum { value = 1U };
        };
    }
}


#endif // !__MATH_POWERS_HPP__