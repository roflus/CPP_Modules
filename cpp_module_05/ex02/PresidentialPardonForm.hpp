#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    /* data */
public:
    PresidentialPardonForm(/* args */);
    PresidentialPardonForm(const PresidentialPardonForm &old_obj);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &old_obj);
    ~PresidentialPardonForm();
};

#endif