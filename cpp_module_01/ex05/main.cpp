#include "Harl.hpp"

int main(void){

    Harl zeikerd;

    zeikerd.complain("Error");
    zeikerd.complain("Warning");
    zeikerd.complain("Info");
    zeikerd.complain("Debug");
    zeikerd.complain(" ");
    return EXIT_SUCCESS;
}