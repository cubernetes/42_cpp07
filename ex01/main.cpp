#include "iter.hpp"
#include <iostream>

static inline void print(char c) { std::cout << c << std::endl; }
static inline void print_fancy(char c) { std::cout << "~~~ " << c << " ~~~" << std::endl; }

int main() {
    iter("Hello, World!", 13, print);
    iter("Hello, World!", 13, print_fancy);
}
