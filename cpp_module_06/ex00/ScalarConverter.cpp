#include "ScalarConverter.hpp"

Scalarconverter::Scalarconverter(std::string input) {
    _input = input;
    std::cout << "Default constructor called" << std::endl;
}

Scalarconverter::Scalarconverter(const Scalarconverter &old_obj) {
    _input = old_obj._input;
    std::cout << "Copy constructor called" << std::endl;
}

Scalarconverter &Scalarconverter::operator=(const Scalarconverter &old_obj) {
    _input = old_obj._input;
    return *this;
    std::cout << "Copy assignment operator called" << std::endl;
}

Scalarconverter::~Scalarconverter(void) {
    std::cout << "Deconstructor called" << std::endl;
}

void    Scalarconverter::convert(void) {
    _type = getType();
    if (_type == CHAR)
        castchar();
    if (_type == INT)
        castint();
    if (_type == DOUBLE)
        castdouble();
    if (_type == FLOAT)
        castfloat();
    
    if (_type != ERROR)
        print();
    else
        std::cout << "ERROR" << std::endl;
}

int    Scalarconverter::getType(void) {
    if (_input.size() == 1)
        return CHAR;
    if ()
        return INT;
    if ()
        return DOUBLE;
    if ()
        return FLOAT;
    else
        return ERROR;
}

void    Scalarconverter::print(void) {
    
}

void    Scalarconverter::castchar(void) {
    _char = static_cast<char>(_input[0]);
    _int = static_cast<int>(_char);
    _double = static_cast<double>(_char);
    _float = static_cast<float>(_char);
}

void    Scalarconverter::castint(void) {
    _int = static_cast<int>(atoi(_input.c_str()));
    _double = static_cast<double>(_int);
    _float = static_cast<float>(_int);
    _char = static_cast<char>(_double);
}

void    Scalarconverter::castdouble(void) {
    _double = static_cast<double>(atof(_input.c_str()));
    _float = static_cast<float>(_double);
    _char = static_cast<char>(_double);
    _int = static_cast<int>(_double);
}

void    Scalarconverter::castfloat(void) {
    _float = static_cast<float>(strtof(_input.c_str(), NULL));
    _char = static_cast<char>(_float);
    _int = static_cast<int>(_float);
    _double = static_cast<double>(_float);
}