#include "Cat.hpp"

Cat::Cat() : Animal() {
    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat &old_obj) : Animal (old_obj) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = old_obj;
}

Cat &Cat::operator=(const Cat &old_obj) {
    this->_type = old_obj._type;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat deconstructor called" << std::endl;
    delete this->_brain;
}

void    Cat::makeSound(void) const {
    std::cout << "Miauw!!" << std::endl;
}