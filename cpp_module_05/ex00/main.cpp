# include "Bureaucrat.hpp"

int main(void){


    // Bureaucrat buur("jan", 150);
    // std::cout << buur << std::endl; 

    // try {
    //     buur.incrementGrade();
    //     std::cout << "better grade" << std::endl;
    // }
    // catch(Bureaucrat::GradeTooHighException &e){
    //     std::cout << "Exception caught" << std::endl;
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << std::endl << std::endl;
    // std::cout << buur.getGrade() << std::endl;


    // try{
    //     buur.decrementGrade();
    //     std::cout << "worse grade" << std::endl;
    // }
    // catch(Bureaucrat::GradeTooLowException &e){
    //     std::cout << "Exception caught" << std::endl;
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << std::endl << std::endl;
    // std::cout << buur.getGrade() << std::endl;


    try{
        Bureaucrat buro("henk", -140);
    }
    catch(Bureaucrat::GradeTooLowException &e){
        std::cout << "Exception caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &e){
        std::cout << "Exception caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
}  