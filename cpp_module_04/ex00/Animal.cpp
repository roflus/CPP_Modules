#include "Animal.hpp"

Animal::Animal(void){
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "Dier";
}

Animal::Animal(const Animal &old_obj){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = old_obj;
}

Animal &Animal::operator=(const Animal &old_obj){
    std::cout << "Animal copy assignment operator called" << std::endl;
    this->type = old_obj.type;
    return *this;
}

Animal::~Animal(void){
    std::cout << "Animal deconstructor called" << std::endl;
}

void Animal::makeSound(void) const{
    if (this->type == "Cat")
        std::cout << "Miauw!!" << std::endl;
    else if (this->type == "Dog")
        std::cout << "Woef.. woef!!" << std::endl;
    else
        std::cout << "Rawr!" << std::endl;
}

std::string Animal::getType(void) const{
    return this->type;
}
