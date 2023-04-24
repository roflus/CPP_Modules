#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string &namef, int grade) : _name(namef), _grade(grade)
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj) : _name(old_obj.getName()), _grade(old_obj.getGrade())
{
    std::cout << "Copy constructor called" << std::endl;
    // *this = old_obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &old_obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_grade = old_obj.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Deconstructor called" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
    return this->_name;
}

int Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade(void)
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade(void)
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed Form: " << form.getName() << std::endl;
    }
    catch (Form::GradeTooLowException &ex)
    {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << ex.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}
