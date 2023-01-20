#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    /* data */
public:
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm(const RobotomyRequestForm &old_obj);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &old_obj);
    ~RobotomyRequestForm();
};

#endif