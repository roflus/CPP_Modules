# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main(void){

    try{
        std::cout << std::endl << "----------------Create bureaucrat----------------" << std::endl;
        // Bureaucrat buur("jan", 145);
        // Bureaucrat buur("jan", 137);
        // Bureaucrat buur("jan", 44);
        Bureaucrat buur("jan", 5);
        std::cout << buur << std::endl; 
        std::cout << std::endl << "------------Create Shrubbery Creation form-------------" << std::endl;
        ShrubberyCreationForm SCForm("form");
        std::cout << SCForm << std::endl;
        buur.signAForm(SCForm);
        buur.executeForm(SCForm);
        std::cout << SCForm << std::endl;
        std::cout << std::endl << "------------Create Robotomy Request form-------------" << std::endl;
        RobotomyRequestForm RRForm("Robot");
        std::cout << RRForm << std::endl;
        buur.signAForm(RRForm);
        buur.executeForm(RRForm);
        std::cout << RRForm << std::endl;
        std::cout << std::endl << "------------Create Presidential Pardon form-------------" << std::endl;
        PresidentialPardonForm PPForm("Henk");
        std::cout << PPForm << std::endl;
        buur.signAForm(PPForm);
        buur.executeForm(PPForm);
        std::cout << PPForm << std::endl;
        std::cout << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e){
        std::cout << "Exception caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &e){
        std::cout << "Exception caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    return 0;
}  