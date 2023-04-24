#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    const std::string &_target;
public:
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &old_obj);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &old_obj);
    ~ShrubberyCreationForm();

    void    execute(Bureaucrat const &executor) const;

};

#endif