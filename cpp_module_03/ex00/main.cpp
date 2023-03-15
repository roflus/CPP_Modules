#include "ClapTrap.hpp"

int main(void){

    {
        ClapTrap standard;
        for (int i = 0; i <= 10; i++)
            standard.attack("Player");
        standard.beRepaired(10);
    }
    std::cout << std::endl;
    {
        ClapTrap claptrap("Zer0");
        claptrap.takeDamage(9);
        claptrap.beRepaired(2);
        claptrap.beRepaired(2);
        claptrap.beRepaired(5);
    }
    std::cout << std::endl;
    {
        ClapTrap standard;
        ClapTrap copy = standard;
        copy.takeDamage(100);
        copy.attack("standard");
        copy.beRepaired(10);  
    }
    return EXIT_SUCCESS;
}