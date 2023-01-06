#include "Fixed.hpp"
#include "iostream"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->fixedPointNumber = 0;
}

Fixed::Fixed(const int number){
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointNumber = number << Fixed::fractionalBits;
}

Fixed::Fixed(const float numberf){
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old_obj){
    std::cout << "Copy constructor called" << std::endl;
    // this->fixedPointNumber = old_obj.getRawBits();
    *this = old_obj;
}  

Fixed & Fixed::operator = (const Fixed &old_obj){
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointNumber = old_obj.getRawBits();
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
    return this->fixedPointNumber;
}

void    Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointNumber = raw;
}

float   Fixed::toFloat(void) const{
    return (float)this->fixedPointNumber / (1 << Fixed::fractionalBits);
}

int     Fixed::toInt(void) const{
    return this->fixedPointNumber >> Fixed::fractionalBits;
}
