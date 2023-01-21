#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm("PresidentialPardonForm", 25, 5), target(target)
    {
        std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old_obj)
    : AForm(old_obj), target(old_obj.target) 
    {
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &old_obj){
    std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const{
    if (this->getGradeEx() < executor.getGrade())
        throw AForm::GradeTooLowException();
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
