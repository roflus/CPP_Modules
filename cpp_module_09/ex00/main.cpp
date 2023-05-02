#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    BitcoinExchange be(argv[1]);
    std::map<std::string, float> _map;
    std::fstream file;
    file.open(be._infile, std::fstream::in);
    if (!file)
    {
        std::cout << "Can't open file" << std::endl;
        return 1;
    }
    std::string date;
    std::string valueString;
    float   value;
    while (file) {
        getline(file, date, ',');
        getline(file, valueString);
        value = atof(valueString.c_str());
        _map[value] = date;
        _map.insert(date , value);
    }
    std::map<std::string, float>::iterator vit; 
    for (vit = _map.begin(); vit != _map.end(); vit++) {
        std::cout << vit->first << ' ' << vit->second;
    }
}