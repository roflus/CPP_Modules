#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weaponA(weapon){
    this->name = name;
}

HumanA::~HumanA(){}

void HumanA::attack(){
    std::cout << name + " attacks with their " + this->weaponA.getType() << std::endl;
}