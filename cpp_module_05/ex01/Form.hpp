#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _isSigned;
    const int _gradeSign;
    const int _gradeEx;

public:
    // Form(void);
    Form(const std::string name, const int gradeSing, const int gradeEx);
    Form(const Form &old_obj);
    Form &operator=(const Form &old_obj);
    ~Form(void);

    std::string getName() const;
    int getGradeSign() const;
    int getGradeEx() const;
    bool getSigned() const;

    void beSigned(Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw() { return "Grade to high!"; }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw() { return "Grade to low!"; }
    };
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif