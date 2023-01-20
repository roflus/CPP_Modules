#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
private:
    const std::string name;
    bool      isSigned;
    const int gradeSign;
    const int gradeEx;
public:
    AForm(void);
    AForm(const std::string name, const int gradeSing, const int gradeEx);
    AForm(const AForm &old_obj);
    AForm &operator=(const AForm &old_obj);
    ~AForm(void);

    std::string getName() const;
    int     getGradeSign() const;
    int     getGradeEx() const;
    bool    getSigned() const; 

    void    beSigned(Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception{
        public:
            const char *what() const throw() {return "Grade to high!";}
    };

    class GradeTooLowException : public std::exception{
        public:
            const char *what() const throw () {return "Grade to low!";}
    };
};

std::ostream &operator << (std::ostream &out, const AForm &Aform);


#endif