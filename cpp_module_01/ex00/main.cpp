#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void){

    Zombie *zombie;

    zombie = newZombie("Heap");
    delete zombie;
    zombie = newZombie("Henk");
    randomChump("Stack");
    randomChump("henk");
    delete zombie;
    return EXIT_SUCCESS;
}