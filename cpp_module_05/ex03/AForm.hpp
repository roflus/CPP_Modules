#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
private:
    const std::string   _name;
    bool                _isSigned;
    const int           _gradeSign;
    const int           _gradeEx;
public:
    AForm(void);
    AForm(const std::string name, const int gradeSign, const int gradeEx);
    AForm(const AForm &old_obj);
    AForm &operator=(const AForm &old_obj);
    virtual ~AForm(void);

    std::string getName() const;
    int     getGradeSign() const;
    int     getGradeEx() const;
    bool    getSigned() const; 

    void    beSigned(Bureaucrat &bureaucrat);

    virtual void    execute(Bureaucrat const &executor) const = 0;

    class GradeTooHighException : public std::exception{
        public:
            const char *what() const throw();
    };

    class GradeTooLowException : public std::exception{
        public:
            const char *what() const throw ();
    };

    class NotSignedException: public std::exception{
        public:
            const char *what() const throw ();
    };
};

std::ostream &operator << (std::ostream &out, const AForm &Aform);

#endif