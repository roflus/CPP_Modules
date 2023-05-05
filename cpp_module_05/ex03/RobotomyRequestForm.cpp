#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("RobotomyRequestForm", 72, 45), target(target)
    {
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old_obj)
    : AForm(old_obj), target(old_obj.target)
    {
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &old_obj){
    std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
    (void)old_obj;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    if (this->getGradeEx() < executor.getGrade())
        throw AForm::GradeTooLowException();
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    std::srand((unsigned) std::time(NULL));
    std::cout << "Drill... drill...." << std::endl;
    if (rand() % 2)
        std::cout << target << " has been robotomized successfuly!" << std::endl;
    else 
        std::cout << target << " robotomy failed!" << std::endl;
}