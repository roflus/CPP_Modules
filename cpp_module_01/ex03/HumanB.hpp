#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon *_weaponB;

public:
    HumanB(std::string name);
    ~HumanB(void);

    void    setWeapon(Weapon &weapon);
    void    attack(void);
};

#endif
