#include "Harl.hpp"

int main(int argc, char **argv){

    if (argc != 2)
        std::cout << "Goed lezen" << std::endl;
    Harl zeikerd;
    zeikerd.complain(argv[1]);
}