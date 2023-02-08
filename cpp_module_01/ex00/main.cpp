# include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void){

    Zombie *zombie;
    zombie = newZombie("Heap");
    zombie->announce();
    delete zombie;

    std::cout << std::endl;
    randomChump("Stack");

    return EXIT_SUCCESS;
}