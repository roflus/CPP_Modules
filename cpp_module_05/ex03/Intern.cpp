# include "Intern.hpp"


Intern::Intern(void) {
    std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern &old_obj){
    std::cout << "Copy constructor called" << std::endl;
    (void)old_obj;
}

Intern &Intern::operator=(const Intern &old_obj){
    std::cout << "Copy assignment operator called" << std::endl;
    (void)old_obj;
    return *this;
}

Intern::~Intern(void){
    std::cout << "Intern Deconstructor called" << std::endl;
}

AForm *Intern::makeForm(std::string name, std::string target){

    AForm *form = NULL;
    std::string forms[3] = {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon",
    };

    int i;
    for (i = 0; i < 4; i++){
        if (name == forms[i])
            break ;
    }

    switch (i) {
    case 0:
        form = new RobotomyRequestForm(target);
        std::cout << "Intern creates " << form->getName() << std::endl;
        break;
    case 1:
        form = new ShrubberyCreationForm(target);
        std::cout << "Intern creates " << form->getName() << std::endl;
        break;
    case 2:
        form = new PresidentialPardonForm(target);
        std::cout << "Intern creates " << form->getName() << std::endl;
        break;
    default:
        std::cout << "Error: no such form exists." << std::endl;
        break;
    }
    return (form);
}