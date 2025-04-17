#pragma once
#include <cstddef>
#include <iostream>

template <typename T, typename F> void iter(T *arr, std::size_t len, F f) {
    for (std::size_t i = 0; i < len; ++i)
        f(arr[i]);
}

template <typename T> void hehe(T x) { std::cout << "x: " << x << std::endl; }
