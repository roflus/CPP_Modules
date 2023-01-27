# include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void){

    Zombie *zombie;

    zombie = newZombie("Heap");
    delete zombie;

    zombie = newZombie("Henk");
    zombie->announce();
    delete zombie;

    randomChump("Stack");
    randomChump("henk");
    
    return EXIT_SUCCESS;
}