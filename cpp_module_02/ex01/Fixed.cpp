#include "Fixed.hpp"
#include "iostream"
#include "math.h"

Fixed::Fixed(void) : _fixedPointNumber(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number) : _fixedPointNumber(number << Fixed::_fractionalBits){
    std::cout << "Int constructor called" << std::endl;
    // this->_fixedPointNumber = number << Fixed::_fractionalBits;
}

Fixed::Fixed(const float numberf) : _fixedPointNumber(roundf(numberf * (1 << Fixed::_fractionalBits))){
    std::cout << "Float constructor called" << std::endl;
    // this->_fixedPointNumber = roundf(numberf * (1 << Fixed::_fractionalBits));
}

Fixed::Fixed(const Fixed &old_obj) : _fixedPointNumber(old_obj.getRawBits()){
    std::cout << "Copy constructor called" << std::endl;
    // *this = old_obj;
}  

Fixed & Fixed::operator = (const Fixed &old_obj){
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(old_obj.getRawBits());
    return *this;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed){
    out << fixed.toFloat();
    return out;
}

int     Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointNumber;
}

void    Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointNumber = raw;
}

float   Fixed::toFloat(void) const{
    return (float)this->_fixedPointNumber / (1 << Fixed::_fractionalBits);
}

int     Fixed::toInt(void) const{
    return this->getRawBits() >> Fixed::_fractionalBits;
}
