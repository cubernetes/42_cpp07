#include "Array.hpp"
#include <iostream>
#include <stdexcept>

int main() {
    Array<int> a(10);
    a[0] = 42;
    a[1] = 21;
    a[2] = 1729;
    std::cout << "a[0]: " << a[0] << std::endl;
    std::cout << "a[1]: " << a[1] << std::endl;
    std::cout << "a[2]: " << a[2] << std::endl;
    try {
        std::cout << "a[10]: " << a[10] << std::endl;
    } catch (const std::out_of_range &) {
        std::cout << "main(): Caught out of range exception" << std::endl;
    }

    Array<int> b;
    try {
        b[0] = 42;
        std::cout << "b[0]: " << b[0] << std::endl;
    } catch (const std::out_of_range &) {
        std::cout << "main(): Caught out of range exception" << std::endl;
    }
    return 0;
}
