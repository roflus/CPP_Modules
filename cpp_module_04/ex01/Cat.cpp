#include "Cat.hpp"

Cat::Cat() : Animal(){
    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat &old_obj) : Animal (old_obj){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = old_obj;
}

Cat &Cat::operator=(const Cat &old_obj){
    this->_type = old_obj._type;
    this->_brain = new Brain(*old_obj._brain);
    return *this;
}

Cat::~Cat(){
    delete this->_brain;
    std::cout << "Cat deconstructor called" << std::endl;
}

void    Cat::makeSound(void) const {
    std::cout << "Miauw!!" << std::endl;
}

Brain *Cat::getBrain(void) const {
    return this->_brain;
}