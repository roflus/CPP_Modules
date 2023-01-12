#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap::ClapTrap(){
    std::cout << "Fragtrap default constructor called" << std::endl;
    this->name = "TheFragTrap";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << this->name << " created!" <<std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name){
    std::cout << "Fragtrap default constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << this->name << " created!" <<std::endl;
}

FragTrap::FragTrap(const FragTrap &old_obj) : ClapTrap::ClapTrap(old_obj){
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = old_obj;
}

FragTrap::~FragTrap(void){
    std::cout << "FragTrap deconstructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << this->name << " wants to high five!" << std::endl;
}