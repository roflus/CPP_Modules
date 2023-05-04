#include "BitcoinExchange.hpp"

static int     argumentCheck(std::string string) {
    if (string[string.size() - 1] != 't' || string[string.size() - 2] != 'x' \
    || string[string.size() - 3] != 't' || string[string.size() - 4] != '.')
        return 0;
    return 1;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    if (!argumentCheck(argv[1])){ 
        std::cout << "Only take .txt file" << std::endl;
        return 1;
    }
    BitcoinExchange be(argv[1]);
    std::map<std::string, float> _data;
    if (!be.getData(_data))
        return 1;
    if (!be.getInput(_data))
        return 1;
    return EXIT_SUCCESS;
}