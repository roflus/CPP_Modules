#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string &namef, int grade) : name(namef), grade(grade) {
    std::cout << "Bureaucrat Default constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj) : name(old_obj.getName()), grade(old_obj.getGrade()){
    std::cout << "Copy constructor called" << std::endl;
    // *this = old_obj;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &old_obj){
    std::cout << "Copy assignment operator called" << std::endl;
    this->grade = old_obj.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat Deconstructor called" << std::endl;
}

std::string Bureaucrat::getName(void) const{
    return this->name;
}

int Bureaucrat::getGrade(void) const{
    return this->grade;
}

void    Bureaucrat::incrementGrade(void){
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::decrementGrade(void){
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

void    Bureaucrat::signAForm(AForm &Aform){
    try {
        Aform.beSigned(*this);
        std::cout << this->getName() << " signed AForm: " << Aform.getName() << std::endl;
    }
    catch(AForm::GradeTooLowException &ex){
        std::cout << this->getName() << " couldn't sign " << Aform.getName() << " because " << ex.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const &form) const{
    try {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch(std::exception &ex){
        std::cout << this->getName() << " can't execute " << form.getName() << " because " << ex.what() << std::endl;
    }
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &bureaucrat){
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}
