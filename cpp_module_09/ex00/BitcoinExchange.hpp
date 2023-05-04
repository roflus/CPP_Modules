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
    std::string _infile;
public:
    BitcoinExchange(std::string infile);
    BitcoinExchange(const BitcoinExchange &old_obj);
    BitcoinExchange &operator=(const BitcoinExchange &old_obj);
    ~BitcoinExchange();

    int     getData(std::map<std::string, float> &_data);
    float   getValue(std::map<std::string, float> &_data, const std::string &key);
    int     checkDate(const std::string &date);
    int     checkValue(const std::string &value);
    int     getInput(std::map<std::string, float> &_data);

};

#endif