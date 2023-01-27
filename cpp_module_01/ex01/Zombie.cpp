#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::~Zombie(void){
    std::cout << this->_name << " deconstructor called." << std::endl;
}

void    Zombie::nameZombie(std::string name){
    if (name == "")
        this->_name = "Horde";
    this->_name = name;
}

void    Zombie::announce(void){
    std::cout << this->_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}