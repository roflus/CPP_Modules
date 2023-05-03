#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string infile) : _infile(infile) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &old_obj) : _infile(old_obj._infile) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &old_obj)
{
    _infile = old_obj._infile;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}


int BitcoinExchange::getData(std::map<std::string, float> &_data) {
    std::ifstream file;
    file.open("data.csv");
    if (!file) {
        std::cout << "Can't open file" << std::endl;
        return 0;
    }
    std::string valueString;
    std::string key;
    float   value;
    std::string firstline;
    getline(file, firstline);
    while (getline(file, key, ',')) {
        getline(file, valueString);
        std::stringstream ss(valueString);
        ss >> value;
        _data[key] = value;
    }
    file.close();
    return 1;
}

int BitcoinExchange::getInput(void) {
    std::ifstream file;
    file.open(_infile);
    if (!file) {
        std::cout << "Can't open file" << std::endl;
        return 0;
    }
    std::string string;
    while (file) {
        getline(file, string);
        
    }
    file.close();
    return 1;

}
