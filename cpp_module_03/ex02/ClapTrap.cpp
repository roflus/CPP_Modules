#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->name = "theClapTrap";
    this->hitPoints = 10;
    this->attackDamage = 0;
    this->energyPoints = 10;
    std::cout << "ClapTrap " << this->name << " created!" <<std::endl;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->attackDamage = 0;
    this->energyPoints = 10;
    std::cout << "ClapTrap " << this->name << " created!" <<std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old_obj){
    std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &old_obj){
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = old_obj.name;
    this->attackDamage = old_obj.attackDamage;
    this->energyPoints = old_obj.energyPoints;
    this->hitPoints = old_obj.hitPoints;
    return *this;
}

void    ClapTrap::attack(const std::string& target){
    if (!hitPoints){
        std::cout << "ClapTrap " << this->name << " can't attack, it has no hit points left" << std::endl;
        return ; 
    }
    if (!energyPoints){
        std::cout << "ClapTrap " << this->name << " can't attack, has no energy points left" << std::endl;
        return ; 
    }
    else{
        this->energyPoints -= 1;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (!hitPoints){
        std::cout << "ClapTrap " << this->name << " has no hit points left" << std::endl;
        return ; 
    }
    else{
        this->hitPoints -= amount;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl; 
        if (this->hitPoints == 0)
            std::cout << "ClapTrap " << this->name << " has no hit points left" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (!hitPoints){
        std::cout << "ClapTrap " << name << " can't repair, it has no hit points left" << std::endl;
        return ; 
    }
    if (!energyPoints){
        std::cout << "ClapTrap " << name << " can't repair, it has no energy points left" << std::endl;
        return ; 
    }
    else{
        this->energyPoints -= 1;
        this->hitPoints += amount;
        std::cout << "ClapTrap " << this->name << " repaired itself for " << amount << " hitpoints" << std::endl;
        if (this->hitPoints > 10){
            this->hitPoints = 10;
            std::cout << "ClapTrap " << this->name << " is full health" << std::endl;
        }
    }
}