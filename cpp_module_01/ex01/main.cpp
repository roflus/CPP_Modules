#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void){
    Zombie *horde;

    horde = zombieHorde(5, "horde1");

    delete[] horde;
    return EXIT_SUCCESS;
}