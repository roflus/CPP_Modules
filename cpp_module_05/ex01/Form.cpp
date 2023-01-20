#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, const int gradeSign, const int gradeEx)
    : name(name), gradeSign(gradeSign), gradeEx(gradeEx), isSigned(false)
    {
        std::cout << "Form default constructor called" << std::endl;
        if (this->gradeEx < 1)
            throw Form::GradeTooHighException();
        if (this->gradeEx > 150)
            throw Form::GradeTooLowException();
}

Form::Form(const Form &old_obj) 
    : name(old_obj.getName()), gradeSign(old_obj.getGradeSign()), \
      gradeEx(old_obj.getGradeEx()), isSigned(old_obj.getSigned())
    {
        std::cout << "copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &old_obj){
    std::cout << "copy asignmend operator called" << std::endl;
    return *this;
}

Form::~Form(){
    std::cout << "Form Deconstructor called" << std::endl;
}

std::string Form::getName() const{
    return this->name;
}

int     Form::getGradeSign() const{
    return this->gradeSign;
}

int     Form::getGradeEx() const{
    return this->gradeEx;
}

bool    Form::getSigned() const{
    return this->isSigned;
}

void    Form::beSigned(Bureaucrat &bureaucrat){
    if (bureaucrat.getGrade() <= this->getGradeSign())
        this->isSigned = true;
    if (bureaucrat.getGrade() >= this->getGradeSign())
        throw Form::GradeTooLowException();
}

std::ostream &operator << (std::ostream &out, const Form &form){
    out << "Form: " << form.getName() << ", gradeSign: " << form.getGradeSign() \
    << ", gradeEx: " << form.getGradeEx() << ", isSigned: " << form.getSigned() << std::endl;
    return out;
}