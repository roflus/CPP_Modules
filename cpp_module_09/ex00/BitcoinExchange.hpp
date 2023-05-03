#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
// Map of multimap or Set
class BitcoinExchange
{
private:
public:
    BitcoinExchange(std::string infile);
    BitcoinExchange(const BitcoinExchange &old_obj);
    BitcoinExchange &operator=(const BitcoinExchange &old_obj);
    ~BitcoinExchange();

    int getData(std::map<std::string, float> &_map);
    int getInput();

    std::string _infile;
    std::string _key;
    float _value;
};

#endif