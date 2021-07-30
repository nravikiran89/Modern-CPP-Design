#include <iostream>

#include "math/powers.hpp"
#include "math/factorials.hpp"

int main() {

    std::cout << power<11U, 2U>::value << std::endl;
    std::cout << factorial<11U>::value << std::endl;

    return 0;
}
