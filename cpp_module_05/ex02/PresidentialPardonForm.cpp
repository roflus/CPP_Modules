#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void){
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old_obj){
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &old_obj){
    std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}
