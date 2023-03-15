#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->_name = "TheScavTrap";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << " created!" <<std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->_name = name;
    this->_attackDamage = 20;
    this->_energyPoints = 50;
    this->_hitPoints = 100;
    std::cout << "ScavTrap " << this->_name << " created!" <<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &old_obj) : ClapTrap(old_obj){
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = old_obj;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &old_obj) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    this->_name = old_obj._name;
    this->_attackDamage = old_obj._attackDamage;
    this->_energyPoints = old_obj._energyPoints;
    this->_hitPoints = old_obj._hitPoints;
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target){
     if (!this->_hitPoints){
        std::cout << "ScavTrap " << this->_name << " can't attack, it has no hit points left" << std::endl;
        return ; 
    }
    if (!this->_energyPoints){
        std::cout << "ScavTrap " << this->_name << " can't attack, has no energy points left" << std::endl;
        return ; 
    }
    else
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode" << std::endl;
}
