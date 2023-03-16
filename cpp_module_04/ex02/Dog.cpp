#include "Dog.hpp"

Dog::Dog(void) : Animal(){
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog &old_obj) : Animal(old_obj){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = old_obj;
}

Dog &Dog::operator=(const Dog &old_obj){
    this->_type = old_obj._type;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog deconstructor called" << std::endl;
    delete this->_brain;
}

void    Dog::makeSound(void) const{
    std::cout << "Woef.. woef!!" << std::endl;
}