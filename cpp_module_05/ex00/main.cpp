# include "Bureaucrat.hpp"

int main(void){

    std::cout << "-------------------Bureaucrat with good grade ---------------------" << std::endl;
    try {
        Bureaucrat buur("jan", 150);
        std::cout << buur << std::endl; 
        std::cout << "increment grade" << std::endl;
        buur.incrementGrade();
        std::cout << buur.getGrade() << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &e){
        std::cout << "Exception caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "-------------------Bureaucrat with good grade ---------------------" << std::endl;
    try{
        Bureaucrat buur("jan", 150);
        std::cout << buur << std::endl; 
        buur.incrementGrade();
        std::cout << buur.getGrade() << std::endl;
        std::cout << "decrement grade" << std::endl;
        buur.decrementGrade();
        std::cout << buur.getGrade() << std::endl;
        buur.decrementGrade();
    }
    catch(Bureaucrat::GradeTooLowException &e){
        std::cout << "Exception caught" << std::endl;
        std::cout << e.what() << std::endl;
    }

    std::cout << "-------------------Bureaucrat with grade to low ---------------------" << std::endl;
    try{
        Bureaucrat buur("jan", 151);
    }
    catch(Bureaucrat::GradeTooLowException &e){
        std::cout << "Exception caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &e){
        std::cout << "Exception caught" << std::endl;
        std::cout << e.what() << std::endl;
    }

    std::cout << "-------------------Bureaucrat with grade to high ---------------------" << std::endl;
    try{
        Bureaucrat buuro("henk", -1);
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