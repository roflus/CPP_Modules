# include "Bureaucrat.hpp"
# include "Intern.hpp"

int main(void){

    std::cout << std::endl << "--------------Intern creates robotomy request from-----------------" << std::endl;
    Intern sjaak;
    AForm *rrf;
    rrf = sjaak.makeForm("robotomy request", "Bender");
    std::cout << *rrf << std::endl; 
    try {
        Bureaucrat buur("jan", 5);
        std::cout << buur << std::endl; 
        buur.signAForm(*rrf);
        buur.executeForm(*rrf);
        std::cout << *rrf << std::endl; 
    }
    catch(Bureaucrat::GradeTooHighException &e){
        std::cout << "Exception caught" << std::endl;
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "--------------Intern creates shrubbery creation request from-----------------" << std::endl;
    rrf = sjaak.makeForm("shrubbery creation", "Bender");
    std::cout << *rrf << std::endl; 
    try {
        Bureaucrat buur("jan", 5);
        std::cout << buur << std::endl; 
        buur.signAForm(*rrf);
        buur.executeForm(*rrf);
        std::cout << *rrf << std::endl; 
    }
    catch(Bureaucrat::GradeTooHighException &e){
        std::cout << "Exception caught" << std::endl;
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "--------------Intern creates presidentrial pardon from-----------------" << std::endl;
    rrf = sjaak.makeForm("presidential pardon", "Bender");
        std::cout << *rrf << std::endl; 
    try {
        Bureaucrat buur("jan", 5);
        std::cout << buur << std::endl; 
        buur.signAForm(*rrf);
        buur.executeForm(*rrf);
        std::cout << *rrf << std::endl; 
    }
    catch(Bureaucrat::GradeTooHighException &e){
        std::cout << "Exception caught" << std::endl;
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "--------------Intern is new-----------------" << std::endl;
    rrf = sjaak.makeForm("presidential", "Bender");

    return EXIT_SUCCESS;
}  