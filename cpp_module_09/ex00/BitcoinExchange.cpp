#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string infile) : _infile(infile) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &old_obj) : _infile(old_obj._infile) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &old_obj)
{
    _infile = old_obj._infile;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}
