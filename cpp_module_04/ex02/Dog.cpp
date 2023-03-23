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
    this->_brain = new Brain(*old_obj._brain);
    return *this;
}

Dog::~Dog(){
    delete this->_brain;
    std::cout << "Dog deconstructor called" << std::endl;
}

void    Dog::makeSound(void) const{
    std::cout << "Woef.. woef!!" << std::endl;
}

Brain *Dog::getBrain(void) const{
    return this->_brain;
}
