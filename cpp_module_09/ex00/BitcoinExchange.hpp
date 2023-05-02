#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
// Map of multimap or Set
class BitcoinExchange
{
private:
public:
    BitcoinExchange(std::string infile);
    BitcoinExchange(const BitcoinExchange &old_obj);
    BitcoinExchange &operator=(const BitcoinExchange &old_obj);
    ~BitcoinExchange();

    std::string _infile;
    std::string _key;
    float _value;
};

#endif