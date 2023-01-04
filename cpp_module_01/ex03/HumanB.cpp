#include "HumanB.hpp"


HumanB::HumanB(std::string name){
    this->name = name;
    this->weaponB = NULL;
}

HumanB::~HumanB(void){}

void HumanB::setWeapon(Weapon &weapon){
    this->weaponB = &weapon;
}


void HumanB::attack(){
    if (!this->weaponB)
        std::cout << name + " attacks unarmed " << std::endl;
    else
        std::cout << name + " attacks with their " + this->weaponB->getType() << std::endl;
}

