#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void){
    Zombie *horde;

    horde = zombieHorde(5, "horde1");
    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
        horde[i].announce();
    delete[] horde;

    Zombie *bigHorde;
    bigHorde = zombieHorde(20, "BigHorde");
    std::cout << std::endl;
    for (int i = 0; i < 20; i++)
        bigHorde[i].announce();
    delete[] bigHorde;

    return EXIT_SUCCESS;
}