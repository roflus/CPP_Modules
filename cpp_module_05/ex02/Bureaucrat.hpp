#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class AForm;

class Bureaucrat{

    private:
        const std::string   _name;
        int                 _grade;

    public:
        Bureaucrat(const std::string &namef, int grade);
        Bureaucrat(const Bureaucrat &old_obj);
        Bureaucrat &operator=(const Bureaucrat &old_obj);
        ~Bureaucrat(void);

        std::string getName(void) const;
        int getGrade(void) const;

        void    incrementGrade(void);
        void    decrementGrade(void);

        void    signAForm(AForm &Aform);

        void    executeForm(AForm const &Aform) const;

        class GradeTooHighException : public std::exception{
            public:
                const char *what() const throw ();
        };

        class GradeTooLowException : public  std::exception{
            public:
                const char *what() const throw ();
        };

};

std::ostream &operator << (std::ostream &out, const Bureaucrat &bureaucrat);

#endif