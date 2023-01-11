#include "Fixed.hpp"
#include "iostream"
#include "math.h"

/* ---------------------------Constructors------------------------------------*/

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
    this->fixedPointNumber = roundf(numberf * (1 << Fixed::fractionalBits));
}

/* ---------------------------Copy constructor------------------------------------*/

Fixed::Fixed(const Fixed &old_obj){
    std::cout << "Copy constructor called" << std::endl;
    // this->fixedPointNumber = old_obj.getRawBits();
    *this = old_obj;
}  

/* ---------------------------Destructor------------------------------------*/

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

/* ---------------------------Copy assignment operator------------------------------------*/

Fixed & Fixed::operator = (const Fixed &old_obj){
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointNumber = old_obj.getRawBits();
    return *this;
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed){
    out << fixed.toFloat();
    return out;
}

/* ---------------------------Member functions------------------------------------*/

int     Fixed::getRawBits(void) const{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointNumber;
}

void    Fixed::setRawBits(int const raw){
    // std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointNumber = raw;
}

float   Fixed::toFloat(void) const{
    return (float)this->fixedPointNumber / (1 << Fixed::fractionalBits);
}

int     Fixed::toInt(void) const{
    return this->fixedPointNumber >> Fixed::fractionalBits;
}

/* ---------------------------Static member functions------------------------------------*/

Fixed& Fixed::min(Fixed &first, Fixed &second){
    if (first < second)
        return first;
    else
        return second;
}

Fixed& Fixed::max(Fixed &first, Fixed &second){
    if (first > second)
        return first;
    else
        return second;
}

const Fixed& Fixed::min(const Fixed &first, const Fixed &second){
    if (first < second)
        return first;
    else
        return second;
}

const Fixed& Fixed::max(const Fixed &first, const Fixed &second){
    if (first > second)
        return first;
    else
        return second;
}

/* ---------------------------Comparison Operators------------------------------------*/

bool    Fixed::operator == (const Fixed &fixed) const{
    return this->getRawBits() == fixed.getRawBits();
}
bool    Fixed::operator != (const Fixed &fixed) const{
    return this->getRawBits() != fixed.getRawBits();
}
bool    Fixed::operator <  (const Fixed &fixed) const{
    return this->getRawBits() < fixed.getRawBits();
}
bool    Fixed::operator >  (const Fixed &fixed) const{
    return this->getRawBits() > fixed.getRawBits();
}
bool    Fixed::operator <= (const Fixed &fixed) const{
    return this->getRawBits() <= fixed.getRawBits();
}
bool    Fixed::operator >= (const Fixed &fixed) const{
    return this->getRawBits() <= fixed.getRawBits();
} 

/* ---------------------------Arithmetic Operators------------------------------------*/

Fixed   Fixed::operator + (const Fixed &fixed) const{
    Fixed result;

    result.setRawBits(this->getRawBits() + fixed.getRawBits());
    return result;
}

Fixed   Fixed::operator - (const Fixed &fixed) const{
    Fixed result;

    result.setRawBits(this->getRawBits() - fixed.getRawBits());
    return result;
}

Fixed   Fixed::operator * (const Fixed &fixed) const{
    Fixed result(this->toFloat() * fixed.toFloat());
    return result;
}

Fixed   Fixed::operator / (const Fixed &fixed) const{
    Fixed result(this->toFloat() / fixed.toFloat());
    return result;
}

/* ---------------------------Increment/Decrement Operators------------------------------------*/

Fixed&  Fixed::operator++(){
    this->fixedPointNumber++;
    return *this;
}

Fixed&  Fixed::operator--(){
    this->fixedPointNumber--;
    return *this;
}
Fixed   Fixed::operator++(int){
    Fixed fixed(*this);
    ++(*this);
    return fixed;
}
Fixed   Fixed::operator--(int){
    Fixed fixed(*this);
    --(*this);
    return fixed;
}
