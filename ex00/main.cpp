#include "whatever.hpp"
#include <iostream>

int main() {
    int a = 2;
    int b = 3;

    std::cout << "Swapping a=" << a << " and b=" << b << std::endl;
    swap(a, b);
    std::cout << "Result a=" << a << " and b=" << b << std::endl;
    std::cout << std::endl;

    std::cout << "Comparing (min) a=" << a << " and b=" << b << std::endl;
    std::cout << min(a, b) << std::endl;
    std::cout << std::endl;

    std::cout << "Comparing (max) a=" << a << " and b=" << b << std::endl;
    std::cout << max(a, b) << std::endl;
    std::cout << std::endl;
}
