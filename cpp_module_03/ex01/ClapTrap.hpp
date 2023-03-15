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

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
    protected:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;
};

#endif