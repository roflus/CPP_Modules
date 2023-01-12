#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->name = "TheScavTrap";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " created!" <<std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->name = name;
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "ScavTrap " << this->name << " created!" <<std::endl;
}

ScavTrap::ScavTrap(const ClapTrap &old_obj) : ClapTrap(old_obj){
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = old_obj;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target){
     if (!hitPoints){
        std::cout << "ScavTrap " << this->name << " can't attack, it has no hit points left" << std::endl;
        return ; 
    }
    if (!energyPoints){
        std::cout << "ScavTrap " << this->name << " can't attack, has no energy points left" << std::endl;
        return ; 
    }
    else
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}
