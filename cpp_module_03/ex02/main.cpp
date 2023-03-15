#include "FragTrap.hpp"

int main(void) {
    {
        FragTrap standard;
        for (int i = 0; i <= 10; i++)
            standard.attack("Player");
        standard.highFivesGuys();
    }
    std::cout << std::endl;
    {
        FragTrap fragtrap("Zer0");
        fragtrap.takeDamage(9);
        fragtrap.beRepaired(2);
        fragtrap.beRepaired(2);
        fragtrap.beRepaired(5);
        fragtrap.highFivesGuys();
    }
    std::cout << std::endl;
    {
        FragTrap standard;
        FragTrap copy = standard;
        copy.takeDamage(100);
        copy.attack("standard");
        copy.beRepaired(10);
    }
    return EXIT_SUCCESS;
}