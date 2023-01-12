#include "Brain.hpp"

Brain::Brain(void){
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &old_obj){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = old_obj;
}

Brain &Brain::operator = (const Brain &old_obj){
    std::cout << "Brain copy assignment operator called" << std::endl;
    this->ideas[100] = old_obj.ideas[100];
    return *this;
}

Brain::~Brain(void){
    std::cout << "Brain deconstructor called" << std::endl;
}
