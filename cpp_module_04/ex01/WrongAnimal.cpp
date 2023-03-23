#include "WrongAnimal.hpp"

WAnimal::WAnimal(void){
    std::cout << "WAnimal default constructor called" << std::endl;
    this->_type = "Wrong Animal";
}

WAnimal::WAnimal(const WAnimal &old_obj){
    std::cout << "WAnimal copy constructor called" << std::endl;
    *this = old_obj;
}

WAnimal &WAnimal::operator=(const WAnimal &old_obj){
    std::cout << "WAnimal copy assignment operator called" << std::endl;
    this->_type = old_obj._type;
    return *this;
}

WAnimal::~WAnimal(void){
    std::cout << "WAnimal deconstructor called" << std::endl;
}

void WAnimal::makeSound(void) const{
    std::cout << "I am a wrong animal!" << std::endl;
}

std::string WAnimal::getType(void) const{
    return this->_type;
}
