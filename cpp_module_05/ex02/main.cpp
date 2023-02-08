# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main(void){

    // Bureaucrat buur("Henk", 140);
    // ShrubberyCreationForm SCForm("home");
    // buur.signAForm(SCForm);
    // buur.executeForm(SCForm);


    Bureaucrat buur("Jan", 6);
    RobotomyRequestForm RRForm("Robot");
    buur.signAForm(RRForm);
    buur.executeForm(RRForm);
    buur.executeForm(RRForm);
    buur.executeForm(RRForm);
    buur.executeForm(RRForm);
    buur.executeForm(RRForm);
    buur.executeForm(RRForm);
    buur.executeForm(RRForm);
    buur.executeForm(RRForm);
    buur.executeForm(RRForm);
    buur.executeForm(RRForm);
    buur.executeForm(RRForm);






    // Bureaucrat buur("Kees", 4);
    // PresidentialPardonForm PPForm("Henk");
    // buur.signAForm(PPForm);
    // buur.executeForm(PPForm);
}  