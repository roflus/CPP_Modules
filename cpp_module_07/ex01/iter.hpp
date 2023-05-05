#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <array>

template <typename T>
void    print(T &x) {
    std::cout << "Array: " << x << std::endl;
}

template <typename T>
void    add(T &x) {
    x += 2;
}

template <typename T>
void    changeString(T &x) {
    x = "string";
}

template <typename T>
void    iter(T *a, size_t b,  void (*f)(T const &)) {
    for (size_t i = 0; i < b; i++)
        (*f)(a[i]);
}

#endif