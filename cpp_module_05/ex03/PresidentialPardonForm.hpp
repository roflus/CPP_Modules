#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    const std::string &target; 
public:
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &old_obj);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &old_obj);
    ~PresidentialPardonForm();
    
    void    execute(Bureaucrat const &executor) const;
};

#endif