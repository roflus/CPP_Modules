#include "ScavTrap.hpp"

int main(void) {

    {
        ScavTrap standard;
        for (int i = 0; i <= 10; i++)
            standard.attack("Player");
        standard.guardGate();
    }
    std::cout << std::endl;
    {
        ScavTrap scavtrap("Zer0");
        scavtrap.takeDamage(9);
        scavtrap.beRepaired(2);
        scavtrap.beRepaired(2);
        scavtrap.beRepaired(5);
        scavtrap.guardGate();
    }
    std::cout << std::endl;
    {
        ScavTrap standard;
        ScavTrap copy = standard;
        copy.takeDamage(100);
        copy.attack("standard");
        copy.beRepaired(10);
    }
    return EXIT_SUCCESS;
}