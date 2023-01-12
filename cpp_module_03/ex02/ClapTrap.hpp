#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &old_obj);
        ClapTrap &operator = (const ClapTrap &old_obj);
        ~ClapTrap();

        std::string     name;
        unsigned int    hitPoints;
        unsigned int    energyPoints;
        unsigned int    attackDamage;

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif