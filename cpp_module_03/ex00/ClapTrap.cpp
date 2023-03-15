#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("theClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called" << std::endl;
    std::cout << "ClapTrap " << this->_name << " created!" <<std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called" << std::endl;
    std::cout << "ClapTrap " << this->_name << " created!" <<std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old_obj) {
    std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &old_obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = old_obj._name;
    this->_attackDamage = old_obj._attackDamage;
    this->_energyPoints = old_obj._energyPoints;
    this->_hitPoints = old_obj._hitPoints;
    return *this;
}

void    ClapTrap::attack(const std::string& target) {
    if (!this->_hitPoints) {
        std::cout << "ClapTrap " << this->_name << " can't attack, it has no hit points left" << std::endl;
        return ; 
    }
    if (!this->_energyPoints) {
        std::cout << "ClapTrap " << this->_name << " can't attack, has no energy points left" << std::endl;
        return ; 
    }
    else {
        this->_energyPoints -= 1;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (!this->_hitPoints){
        std::cout << "ClapTrap " << this->_name << " has no hit points left" << std::endl;
        return ; 
    }
    else {
        if (amount >= this->_hitPoints) {
            this->_hitPoints = 0;
            std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl; 
            std::cout << "It has no hit points left" << std::endl;
        }
        else {
            this->_hitPoints -= amount;
            std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl; 
        }
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (!this->_hitPoints){
        std::cout << "ClapTrap " << this->_name << " can't repair, it has no hit points left" << std::endl;
        return ; 
    }
    if (!this->_energyPoints){
        std::cout << "ClapTrap " << this->_name << " can't repair, it has no energy points left" << std::endl;
        return ; 
    }
    else {
        this->_energyPoints -= 1;
        this->_hitPoints += amount;
        std::cout << "ClapTrap " << this->_name << " repaired itself for " << amount << " hitpoints" << std::endl;
        if (this->_hitPoints > 10){
            this->_hitPoints = 10;
            std::cout << "ClapTrap " << this->_name << " is full health" << std::endl;
        }
    }
}