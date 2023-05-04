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

float BitcoinExchange::getValue(std::map<std::string, float> &_data, const std::string &key) {
    std::map<std::string, float>::iterator it;
    for(it = _data.begin(); it != _data.end(); it++) {
        if (key.compare(it->first) == 0) {
            return (it->second);
        }
        if (key.compare(it->first) < 0)
            return (it->second);
    }
    return (it->second);
}


int BitcoinExchange::getInput(std::map<std::string, float> &_data) {
    std::ifstream file;
    file.open(_infile);
    if (!file) {
        std::cout << "Can't open file" << std::endl;
        return 0;
    }
    std::string string;
    getline(file, string);
    std::string date;
    std::string value;
    size_t      found;
    float       dataValue;
    float       inputValue;
    while (getline(file, string)) {
        found = string.find(" | ");
        date = string.substr(0, found);
        if (!checkDate(date)) {
            std::cout << "Error: bad input => " << date << std::endl;
            continue;
        }
        if (found != std::string::npos) {
            value = string.substr(found + 3, string.size());
            if (value.size()  == 0) {
                std::cout << "Error: No value found." << std::endl;
                continue;
            }
            if (checkValue(value) == 0) {
                std::cout << "Error: not a positive number." << std::endl;
                continue;
            }
            if (checkValue(value) == -1) {
                std::cout << "Error: too large a number." << std::endl;
                continue;
            }
            if (checkValue(value) == -2) {
                std::cout << "Error: value is not a valid integer." << std::endl;
                continue;
            }
        }
        dataValue = getValue(_data, date);
        inputValue = atof(value.c_str());
        std::cout << date << " => " << inputValue << " = " << dataValue * inputValue << std::endl;
    }
    file.close();
    return 1;
}

int BitcoinExchange::checkValue(const std::string &value) {
    if (value[0] == '-')
        return 0;
    if (value.size() > 9)
        return -1;
    for (size_t i = 0; i < value.size(); i++){
        if (!isdigit(value[i]))
            return -2;
    }
    std::stringstream val;
    float num;
    val << value;
    val >> num;
    if (num > 1000)
        return -1;
    return 1;
}

int BitcoinExchange::checkDate(const std::string &date) {
    if (date.size() > 10)
        return 0;
    struct tm tm;
    if (!strptime(date.c_str(), "%F", &tm)) {
        return 0;
    }
    std::stringstream year;
    int y;
    size_t found = date.find("-");
    year << date.substr(0, found);
    year >> y;
    if (y < 2009){
        return 0;
    }
    return 1;
}
