#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap::ClapTrap() {
    std::cout << "Fragtrap default constructor called" << std::endl;
    this->_name = "TheFragTrap";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " created!" <<std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name) {
    std::cout << "Fragtrap default constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " created!" <<std::endl;
}

FragTrap::FragTrap(const FragTrap &old_obj) : ClapTrap::ClapTrap(old_obj) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = old_obj;
}

FragTrap& FragTrap::operator = (const FragTrap &old_obj) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    this->_name = old_obj._name;
    this->_attackDamage = old_obj._attackDamage;
    this->_energyPoints = old_obj._energyPoints;
    this->_hitPoints = old_obj._hitPoints;
    return *this;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap deconstructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->_name << " wants to high five!" << std::endl;
}