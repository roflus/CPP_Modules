#include "Fixed.hpp"
#include "iostream"
#include "math.h"

/* ---------------------------Constructors------------------------------------*/

Fixed::Fixed(void) : _fixedPointNumber(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number) : _fixedPointNumber(number << Fixed::_fractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float numberf) : _fixedPointNumber(roundf(numberf * (1 << Fixed::_fractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
}

/* ---------------------------Copy constructor------------------------------------*/

Fixed::Fixed(const Fixed &old_obj) : _fixedPointNumber(old_obj.getRawBits()) {
    std::cout << "Copy constructor called" << std::endl;
}  

/* ---------------------------Destructor------------------------------------*/

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

/* ---------------------------Copy assignment operator------------------------------------*/

Fixed & Fixed::operator = (const Fixed &old_obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointNumber = old_obj.getRawBits();
    return *this;
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

/* ---------------------------Member functions------------------------------------*/

int     Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointNumber;
}

void    Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointNumber = raw;
}

float   Fixed::toFloat(void) const {
    return (float)this->_fixedPointNumber / (1 << Fixed::_fractionalBits);
}

int     Fixed::toInt(void) const {
    return this->_fixedPointNumber >> Fixed::_fractionalBits;
}

/* ---------------------------Static member functions------------------------------------*/

Fixed& Fixed::min(Fixed &first, Fixed &second) {
    if (first < second)
        return first;
    else
        return second;
}

Fixed& Fixed::max(Fixed &first, Fixed &second) {
    if (first > second)
        return first;
    else
        return second;
}

const Fixed& Fixed::min(const Fixed &first, const Fixed &second) {
    if (first < second)
        return first;
    else
        return second;
}

const Fixed& Fixed::max(const Fixed &first, const Fixed &second) {
    if (first > second)
        return first;
    else
        return second;
}

/* ---------------------------Comparison Operators------------------------------------*/

bool    Fixed::operator == (const Fixed &fixed) const {
    return this->getRawBits() == fixed.getRawBits();
}
bool    Fixed::operator != (const Fixed &fixed) const {
    return this->getRawBits() != fixed.getRawBits();
}
bool    Fixed::operator <  (const Fixed &fixed) const {
    return this->getRawBits() < fixed.getRawBits();
}
bool    Fixed::operator >  (const Fixed &fixed) const {
    return this->getRawBits() > fixed.getRawBits();
}
bool    Fixed::operator <= (const Fixed &fixed) const {
    return this->getRawBits() <= fixed.getRawBits();
}
bool    Fixed::operator >= (const Fixed &fixed) const {
    return this->getRawBits() <= fixed.getRawBits();
} 

/* ---------------------------Arithmetic Operators------------------------------------*/

Fixed   Fixed::operator + (const Fixed &fixed) const {
    Fixed result;

    result.setRawBits(this->getRawBits() + fixed.getRawBits());
    return result;
}

Fixed   Fixed::operator - (const Fixed &fixed) const {
    Fixed result;

    result.setRawBits(this->getRawBits() - fixed.getRawBits());
    return result;
}

Fixed   Fixed::operator * (const Fixed &fixed) const {
    Fixed result(this->toFloat() * fixed.toFloat());
    return result;
}

Fixed   Fixed::operator / (const Fixed &fixed) const {
    Fixed result(this->toFloat() / fixed.toFloat());
    return result;
}

/* ---------------------------Increment/Decrement Operators------------------------------------*/

Fixed&  Fixed::operator++() {
    this->_fixedPointNumber++;
    return *this;
}

Fixed&  Fixed::operator--() {
    this->_fixedPointNumber--;
    return *this;
}
Fixed   Fixed::operator++(int) {
    Fixed fixed(*this);
    ++(*this);
    return fixed;
}
Fixed   Fixed::operator--(int) {
    Fixed fixed(*this);
    --(*this);
    return fixed;
}
