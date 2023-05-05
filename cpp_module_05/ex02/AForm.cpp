#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string name, const int gradeSign, const int gradeEx)
    : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeEx(gradeEx)
    {
        std::cout << "AForm default constructor called" << std::endl;
        if (this->_gradeEx < 1)
            throw AForm::GradeTooHighException();
        if (this->_gradeEx > 150)
            throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &old_obj) 
    : _name(old_obj.getName()), _isSigned(old_obj.getSigned()),
    _gradeSign(old_obj.getGradeSign()), _gradeEx(old_obj.getGradeEx())
    {
        std::cout << "copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &old_obj){
    std::cout << "copy asignmend operator called" << std::endl;
    _isSigned = old_obj.getSigned();
    return *this;
}

AForm::~AForm(){
    std::cout << "AForm Deconstructor called" << std::endl;
}

std::string AForm::getName() const{
    return this->_name;
}

int     AForm::getGradeSign() const{
    return this->_gradeSign;
}

int     AForm::getGradeEx() const{
    return this->_gradeEx;
}

bool    AForm::getSigned() const{
    return this->_isSigned;
}

void    AForm::beSigned(Bureaucrat &bureaucrat){
    if (bureaucrat.getGrade() <= this->getGradeSign())
        this->_isSigned = true;
    if (bureaucrat.getGrade() >= this->getGradeSign())
        throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw() {
    return ("Grade to high!");
}

const char *AForm::GradeTooLowException::what() const throw() {
    return ("Grade to low!");
}

const char *AForm::NotSignedException::what() const throw() {
    return ("Form is not signed!");
}

std::ostream &operator << (std::ostream &out, const AForm &Aform){
    out << "AForm: " << Aform.getName() << ", gradeSign: " << Aform.getGradeSign() \
    << ", gradeEx: " << Aform.getGradeEx() << ", isSigned: " << Aform.getSigned();
    return out;
}