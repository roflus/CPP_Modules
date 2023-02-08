#include "HumanB.hpp"


HumanB::HumanB(std::string name) 
    : _name(name), _weaponB(NULL) {}

HumanB::~HumanB(void){}

void HumanB::setWeapon(Weapon &weapon){
    this->_weaponB = &weapon;
}

void HumanB::attack(){
    if (!this->_weaponB)
        std::cout << this->_name + " attacks unarmed " << std::endl;
    else
        std::cout << this->_name + " attacks with their " + this->_weaponB->getType() << std::endl;
}

