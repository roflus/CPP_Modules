#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc != 2)
        std::cout << "Error: ./covert takes only 1 argument" << std::endl;
    ScalarConverter::convert(argv[1]);
    return 0;
}