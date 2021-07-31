#include <iostream>

#include "math/powers.hpp"
#include "math/factorials.hpp"
#include "frame/custom_assert.hpp"
#include "frame/typelists.hpp"


typedef Typelist<char, Typelist <signed char, unsigned char> > CharList;

int main() {

    std::cout << power<11U, 2U>::value << std::endl;
    std::cout << factorial<11U>::value << std::endl;

    // CompileTimeError< (7 == 5) >();
    CompileTimeError< (7 == 7) >();

    // STATIC_CHECK(7 == 5);
    STATIC_CHECK(7 == 7);

    return 0;
}
