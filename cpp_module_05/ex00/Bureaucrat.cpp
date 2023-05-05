#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &namef, int grade) : _name(namef), _grade(grade)
{
    std::cout << "Default constructor called" << std::endl;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj) : _name(old_obj.getName()), _grade(old_obj.getGrade())
{
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &old_obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_grade = old_obj.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
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

const char *Bureaucrat::GradeTooLowException::what(void) const throw () {
    return ("Grade is to low");
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
    return ("Grade is to high");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}
