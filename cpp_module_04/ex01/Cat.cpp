#include "Cat.hpp"

Cat::Cat() : Animal::Animal(){
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &old_obj) : Animal::Animal (old_obj){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = old_obj;
}

Cat::~Cat(){
    std::cout << "Cat deconstructor called" << std::endl;
    delete brain;
}
