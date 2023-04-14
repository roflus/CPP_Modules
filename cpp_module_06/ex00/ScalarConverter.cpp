#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
    std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &old_obj) {
    std::cout << "Copy constructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &old_obj) {
    return *this;
    std::cout << "Copy assignment operator called" << std::endl;
}

ScalarConverter::~ScalarConverter(void) {
    std::cout << "Deconstructor called" << std::endl;
}

void    ScalarConverter::convert(std::string string) {
    _input = string;
    _type = getType();
    if (_type == CHAR)
        castchar();
    if (_type == INT)
        castint();
    if (_type == DOUBLE)
        castdouble();
    if (_type == FLOAT)
        castfloat();
    
    if (_type != ERROR) {
        printchar();
        printint();
        printdouble();
        printfloat();
    }
    else
        std::cout << "ERROR" << std::endl;
}

int    ScalarConverter::getType(void) {
    char *end;

    if (_input.size() == 1 && isalpha(_input[0]))
        return CHAR;
    if (strtol(_input.c_str(), &end, 10)) {
        if (*end == '\0')
            return INT;
    }
    if (strtod(_input.c_str(), &end)) {
        if (*end == '\0')
            return DOUBLE;
    }
    if (strtof(_input.c_str(), &end)) {
        if (*end == 'f' && end[_input.size() + 1] == '\0')
            return FLOAT;
    }
    else
        return ERROR;
}

void    ScalarConverter::castchar(void) {
    _char = static_cast<char>(_input[0]);
    _int = static_cast<int>(_char);
    _double = static_cast<double>(_char);
    _float = static_cast<float>(_char);
}

void    ScalarConverter::castint(void) {
    _long = static_cast<int>(atol(_input.c_str()));
    _int = static_cast<int>(atol(_input.c_str()));
    _double = static_cast<double>(_int);
    _float = static_cast<float>(_int);
    _char = static_cast<char>(_double);
}

void    ScalarConverter::castdouble(void) {
    _double = static_cast<double>(atof(_input.c_str()));
    _float = static_cast<float>(_double);
    _char = static_cast<char>(_double);
    _int = static_cast<int>(_double);
}

void    ScalarConverter::castfloat(void) {
    _float = static_cast<float>(strtof(_input.c_str(), NULL));
    _char = static_cast<char>(_float);
    _int = static_cast<int>(_float);
    _double = static_cast<double>(_float);
}

void    ScalarConverter::printchar(void) {
    if (isprint(_char) && _int >= 1 && _int <= 127)
        std::cout << "Char: " << _char << std::endl;
    else
        std::cout << "impossible" << _char << std::endl;
}

void    ScalarConverter::printint(void) {
    if (_int > INT_MIN && _int < INT_MAX)
        std::cout << "Int: " << _int << std::endl;
    else
        std::cout << "impossible" << _int << std::endl;
}

void    ScalarConverter::printfloat(void) {
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "Float: " << _float << std::endl;
}

void    ScalarConverter::printdouble(void) {
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "Double: " << _double << std::endl;
}

