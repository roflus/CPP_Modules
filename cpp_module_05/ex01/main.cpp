# include "Bureaucrat.hpp"
# include "Form.hpp"

int main(void){

    try{
        std::cout << "----------------Create bureaucrat----------------" << std::endl;
        Bureaucrat buur("jan", 49);
        std::cout << buur << std::endl; 
        try {
            std::cout << "------------Create form low grade-------------" << std::endl;
            Form form("een", 50, 100);
            std::cout << form << std::endl;
            buur.signForm(form);
            std::cout << form << std::endl;
            std::cout << "------------Create form high grade------------" << std::endl;
            Form _form("een", 44, 100);
            std::cout << _form << std::endl;
            buur.signForm(_form);
            std::cout << _form << std::endl;
        }
        catch(Form::GradeTooLowException &e){
            std::cout << "Exception caught" << std::endl;
            std::cout << e.what() << std::endl;
        }
        catch(Form::GradeTooHighException &e){
            std::cout << "Exception caught" << std::endl;
            std::cout << e.what() << std::endl;
        }
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