#include "Harl.hpp"

int main(int argc, char **argv){

    if (argc != 2)
        std::cout << "Error: wrong input." << std::endl;
    Harl zeikerd;
    std::string level = argv[1];
    zeikerd.complain(level);
}