#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target)
    {
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old_obj)
    : AForm(old_obj), _target(old_obj._target)
    {
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &old_obj){
    std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
    (void)old_obj;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
    if (this->getGradeEx() < executor.getGrade())
        throw AForm::GradeTooLowException();
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    std::ofstream   file(this->_target + "_shrubbery");
    file << "               ,@@@@@@@,                " << std::endl;
    file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.    " << std::endl;
    file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o   " << std::endl;
    file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'  " << std::endl;
    file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'  " << std::endl;
    file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'   " << std::endl;
    file << "   `&%\\ ` /%&'    |.|        \\ '|8'     " << std::endl;
    file << "       |o|        | |         | |       " << std::endl;
    file << "       |.|        | |         | |       " << std::endl;
    file << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__ " << std::endl;
    file.close();
}