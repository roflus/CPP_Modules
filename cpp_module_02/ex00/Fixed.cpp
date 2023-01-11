#include "Fixed.hpp"
#include "iostream"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->number = 0;
}

Fixed::Fixed(const Fixed &old_obj){
    std::cout << "Copy constructor called" << std::endl;
    // this->number = old_obj.getRawBits();
    *this = old_obj;
}  


Fixed & Fixed::operator = (const Fixed &old_obj){
    std::cout << "Copy assignment operator called" << std::endl;
    this->number = old_obj.getRawBits();
    return *this;
}


Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->number;
}

void    Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->number = raw;
}

