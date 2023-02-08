#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    const std::string &target;
public:
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &old_obj);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &old_obj);
    ~RobotomyRequestForm();

    void    execute(Bureaucrat const &executor) const;

};

#endif