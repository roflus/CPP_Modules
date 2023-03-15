#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap &old_obj);
        FragTrap &operator = (const FragTrap &old_obj);
        ~FragTrap(void);

        void highFivesGuys(void);
};


#endif