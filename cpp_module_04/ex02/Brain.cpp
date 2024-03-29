#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++){
        this->_ideas[i] = "One Idea!";
    }
}

Brain::Brain(const Brain &old_obj) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = old_obj;
}

Brain &Brain::operator = (const Brain &old_obj) {
    std::cout << "Brain copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++){
        this->_ideas[i] = old_obj._ideas[i];
    }
    return *this;
}

Brain::~Brain(void) {
    std::cout << "Brain deconstructor called" << std::endl;
}

std::string Brain::getIdeas(int i) const {
    return this->_ideas[i];
}

void    Brain::setIdea(std::string string, int i) {
    this->_ideas[i] = string;
}