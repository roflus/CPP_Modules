#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
public:
    HumanB(std::string name);
    ~HumanB(void);

    Weapon *weaponB;
    void    setWeapon(Weapon &weapon);
    void    attack(void);

};

#endif
