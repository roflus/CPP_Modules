#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern(void);
        Intern(const Intern &old_obj);
        Intern &operator=(const Intern &old_obj);
        ~Intern(void);

        AForm *makeForm(std::string name, std::string target);
};



#endif