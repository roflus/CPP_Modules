#include "BitcoinExchange.hpp"
#include <fstream>
#include <ctime>
int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    BitcoinExchange be(argv[1]);
    std::fstream file;
    file.open(be._infile, std::fstream::in);
    if (!file)
    {
        std::cout << "Can't open file" << std::endl;
        return 1;
    }
}