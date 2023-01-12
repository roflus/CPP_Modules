#include "FragTrap.hpp"

int main(void){

    FragTrap a;
    FragTrap b("b");
    FragTrap c = a;
    ClapTrap d("baas");

    a.attack("b");
    b.attack(a.name);
    c.attack(b.name);
    c.highFivesGuys();
    d.attack(a.name);
    return EXIT_SUCCESS;

}