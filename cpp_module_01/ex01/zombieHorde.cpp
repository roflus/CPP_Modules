#include "Zombie.hpp" 

Zombie *zombieHorde(int N, std::string name){
    Zombie *horde =  new Zombie[N];
    int i = 0;
    while (i < N){
        horde[i].nameZombie(name);
        horde[i].announce();
        i++;
    }
    return horde;
};