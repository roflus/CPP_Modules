#include "WrongAnimal.hpp"

WAnimal::WAnimal(void){
    std::cout << "WAnimal default constructor called" << std::endl;
    this->type = "GeenDier";
}

WAnimal::WAnimal(const WAnimal &old_obj){
    std::cout << "WAnimal copy constructor called" << std::endl;
    *this = old_obj;
}

WAnimal &WAnimal::operator=(const WAnimal &old_obj){
    std::cout << "WAnimal copy assignment operator called" << std::endl;
    this->type = old_obj.type;
    return *this;
}

WAnimal::~WAnimal(void){
    std::cout << "WAnimal deconstructor called" << std::endl;
}

void WAnimal::makeSound(void) const{
    std::cout << "Hey hallo" << std::endl;
}

std::string WAnimal::getType(void) const{
    return this->type;
}
