#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _fixedPointNumber(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old_obj) : _fixedPointNumber(old_obj.getRawBits()){
    std::cout << "Copy constructor called" << std::endl;
}  

Fixed & Fixed::operator = (const Fixed &old_obj){
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(old_obj.getRawBits());
    return *this;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointNumber;
}

void    Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointNumber = raw;
}

