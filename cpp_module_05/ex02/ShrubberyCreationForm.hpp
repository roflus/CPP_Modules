#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    /* data */
public:
    ShrubberyCreationForm(/* args */);
    ShrubberyCreationForm(const ShrubberyCreationForm &old_obj);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &old_obj);
    ~ShrubberyCreationForm();
};

#endif