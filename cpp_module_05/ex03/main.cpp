# include "Bureaucrat.hpp"
# include "Intern.hpp"

int main(void){

    Intern someRandomIntern;
    AForm *rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    return EXIT_SUCCESS;
}  