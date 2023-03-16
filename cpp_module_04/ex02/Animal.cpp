#include "Animal.hpp"

Animal::Animal(void) : _type("Dier") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &old_obj){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = old_obj;
}

Animal &Animal::operator=(const Animal &old_obj){
    std::cout << "Animal copy assignment operator called" << std::endl;
    this->_type = old_obj._type;
    return *this;
}

Animal::~Animal(void){
    std::cout << "Animal deconstructor called" << std::endl;
}

void Animal::makeSound(void) const{
    std::cout << "Rawr!" << std::endl;
}

std::string Animal::getType(void) const{
    return this->_type;
}
