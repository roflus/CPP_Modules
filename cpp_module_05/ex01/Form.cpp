#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, const int gradeSign, const int gradeEx)
    : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeEx(gradeEx)
{
    std::cout << "Form default constructor called" << std::endl;
    if (this->_gradeEx < 1)
        throw Form::GradeTooHighException();
    if (this->_gradeEx > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &old_obj)
    : _name(old_obj.getName()), _isSigned(old_obj.getSigned()),
      _gradeSign(old_obj.getGradeSign()), _gradeEx(old_obj.getGradeEx())
{
    std::cout << "copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &old_obj)
{
    std::cout << "copy asignmend operator called" << std::endl;
    _isSigned = old_obj.getSigned();
    return *this;
}

Form::~Form()
{
    std::cout << "Form Deconstructor called" << std::endl;
}

std::string Form::getName() const
{
    return this->_name;
}

int Form::getGradeSign() const
{
    return this->_gradeSign;
}

int Form::getGradeEx() const
{
    return this->_gradeEx;
}

bool Form::getSigned() const
{
    return this->_isSigned;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGradeSign())
        this->_isSigned = true;
    if (bureaucrat.getGrade() >= this->getGradeSign())
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form: " << form.getName() << ", gradeSign: " << form.getGradeSign()
        << ", gradeEx: " << form.getGradeEx() << ", isSigned: " << form.getSigned() << std::endl;
    return out;
}