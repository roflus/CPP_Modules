#include "ClapTrap.hpp"

int main(void){

    ClapTrap henk("henk");
    ClapTrap klaas("klaas");
    ClapTrap jan(henk);
    ClapTrap kees;
    kees = klaas;


    klaas.attack("henk");
    henk.takeDamage(5);

    henk.attack("klaas");
    klaas.takeDamage(5);
    
    klaas.attack("henk");
    henk.takeDamage(4);

    henk.attack("klaas");
    henk.beRepaired(10);
    
    jan.attack("henk");
    jan.takeDamage(15);

    return EXIT_SUCCESS;
}