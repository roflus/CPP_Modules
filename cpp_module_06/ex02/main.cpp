#include <cstdlib>
#include <iostream>

int main(int argc, char **argv) {
    argv = NULL;
    if (argc != 1)
        return 1;
    srand((unsigned) time(NULL));
    int random = rand() % 3;
    std::cout << random << std::endl;
}