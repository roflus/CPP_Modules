#include "Fixed.hpp"
#include "iostream"

int main(void){

    Fixed a;
    Fixed b(a);
    Fixed c;

    a.setRawBits(15);   
    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    a.setRawBits(3);
    b.setRawBits(5);
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return EXIT_SUCCESS;
}