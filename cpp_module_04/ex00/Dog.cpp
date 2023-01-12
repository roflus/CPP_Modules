#include "Dog.hpp"

Dog::Dog(void) : Animal::Animal(){
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &old_obj) : Animal::Animal(old_obj){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = old_obj;
}

Dog::~Dog(){
    std::cout << "Dog deconstructor called" << std::endl;
}