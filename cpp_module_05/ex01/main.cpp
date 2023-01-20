# include "Bureaucrat.hpp"
# include "Form.hpp"

int main(void){


    Bureaucrat buur("jan", 49);
    Form form("een", 50, 100);
    std::cout << buur << std::endl; 
    std::cout << form << std::endl;

    buur.signForm(form);
    std::cout << std::endl << std::endl;

    // try{
    //     Form form1("een", 50, 160);
    // }
    // catch(Form::GradeTooLowException &ex){
    //     std::cout << "create Exception caught" << std::endl;
    //     std::cout << ex.what() << std::endl;
    // }
    // std::cout << std::endl << std::endl;

}  