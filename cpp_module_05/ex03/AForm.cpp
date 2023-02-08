#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string name, const int gradeSign, const int gradeEx)
    : name(name), gradeSign(gradeSign), gradeEx(gradeEx), isSigned(false)
    {
        std::cout << "AForm default constructor called" << std::endl;
        if (this->gradeEx < 1)
            throw AForm::GradeTooHighException();
        if (this->gradeEx > 150)
            throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &old_obj) 
    : name(old_obj.getName()), gradeSign(old_obj.getGradeSign()), \
      gradeEx(old_obj.getGradeEx()), isSigned(old_obj.getSigned())
    {
        std::cout << "copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &old_obj){
    std::cout << "copy asignmend operator called" << std::endl;
    return *this;
}

AForm::~AForm(){
    std::cout << "AForm Deconstructor called" << std::endl;
}

std::string AForm::getName() const{
    return this->name;
}

int     AForm::getGradeSign() const{
    return this->gradeSign;
}

int     AForm::getGradeEx() const{
    return this->gradeEx;
}

bool    AForm::getSigned() const{
    return this->isSigned;
}

void    AForm::beSigned(Bureaucrat &bureaucrat){
    if (bureaucrat.getGrade() <= this->getGradeSign())
        this->isSigned = true;
    if (bureaucrat.getGrade() >= this->getGradeSign())
        throw AForm::GradeTooLowException();
}

std::ostream &operator << (std::ostream &out, const AForm &Aform){
    out << "AForm: " << Aform.getName() << ", gradeSign: " << Aform.getGradeSign() \
    << ", gradeEx: " << Aform.getGradeEx() << ", isSigned: " << Aform.getSigned() << std::endl;
    return out;
}