#include "whatever.hpp"

int main( void ) {
    std::cout << "------------INT--------------" << std::endl;
    int a = 2;
    int b = 3;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::cout << "----------STRING-------------" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << "----------FLOAT--------------" << std::endl;
    float first = 2.4f;
    float second = 6.2f;
    std::cout << "first = " << first << ", b = " << second << std::endl;
    ::swap( first, second);
    std::cout << "first = " << first << ", b = " << second << std::endl;
    std::cout << "min( first, second ) = " << ::min( first, second) << std::endl;
    std::cout << "max( first, second ) = " << ::max( first, second ) << std::endl;
    return 0;
}