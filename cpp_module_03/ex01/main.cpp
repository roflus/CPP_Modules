#include "ScavTrap.hpp"

int main(void){

    ScavTrap a;
    ScavTrap b("b");
    ScavTrap c = a;
    ClapTrap d("baas");

    a.attack("b");
    b.attack(a.name);
    c.attack(b.name);
    c.guardGate();
    d.attack(a.name);
    return EXIT_SUCCESS;

}