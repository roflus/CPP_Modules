#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::~Zombie(void){
    std::cout << name << std::endl;
}

void    Zombie::nameZombie(std::string name){
    this->name = name;
}

void    Zombie::announce(void){
    std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}