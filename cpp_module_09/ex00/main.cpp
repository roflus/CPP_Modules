#include "BitcoinExchange.hpp"
#include <fstream>
int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    std::fstream file;
    std::string filename = argv[1];
    file.open(filename, std::fstream::in);
    if (!file)
    {
        std::cout << "Can't open file" << std::endl;
        return 1;
    }
}