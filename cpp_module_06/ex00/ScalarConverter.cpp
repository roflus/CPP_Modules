#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
    std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &old_obj) {
    std::cout << "Copy constructor called" << std::endl;
    (void)old_obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &old_obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    (void)old_obj;
    return *this;
}

ScalarConverter::~ScalarConverter(void) {
    std::cout << "Deconstructor called" << std::endl;
}

void    ScalarConverter::convert(std::string string) {
    _input = string;
    if ((_input.size() - 1) == '.') {
        std::cout << "ERROR" << std::endl;
        exit(1);
    }
    _type = getType();
    if (_type == CHAR)
        castchar();
    else if (_type == INT)
        castint();
    else if (_type == DOUBLE)
        castdouble();
    else if (_type == FLOAT)
        castfloat();
    
    if (_type != ERROR) {
        printchar();
        printint();
        printfloat();
        printdouble();
    }
    else {
        std::cout << "ERROR" << std::endl;
        exit(1);
    }
}

int    ScalarConverter::getType(void) {
    char *end;

    if (_input.size() == 1 && isprint(_input[0]) && !isdigit(_input[0]))
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
        if (*end == 'f' && strlen(end) == 1)
            return FLOAT;
    }
    return ERROR;
}

void    ScalarConverter::castchar(void) {
    std::stringstream ss(_input);
    ss >> _char;
    _int = static_cast<int>(_char);
    _double = static_cast<double>(_char);
    _float = static_cast<float>(_char);
}

void    ScalarConverter::castint(void) {
    std::stringstream ss(_input);
    ss >> _tempdouble;
    std::stringstream s(_input);
    s >> _int;
    _double = static_cast<double>(_int);
    _float = static_cast<float>(_int);
    _char = static_cast<char>(_int);
}

void    ScalarConverter::castdouble(void) {
    std::stringstream ss(_input);
    ss >> _double;
    _float = static_cast<float>(_double);
    _char = static_cast<char>(_double);
    _int = static_cast<int>(_double);
}

void    ScalarConverter::castfloat(void) {
    std::string string = _input.substr(0, _input.size() - 1);
    std::stringstream ss(string);
    ss >> _float;
    _char = static_cast<char>(_float);
    _int = static_cast<int>(_float);
    _double = static_cast<double>(_float);
}

void    ScalarConverter::printchar(void) {
    std::cout << "Char: ";
    if (isprint(_char) && _int >= 1 && _int <= 127)
        std::cout << _char << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

void    ScalarConverter::printint(void) {
    std::cout << "Int: ";
    if (_tempdouble < std::numeric_limits<int>::min() || _tempdouble > std::numeric_limits<int>::max())
        std::cout << "impossible" << std::endl;
    else
        std::cout << _int << std::endl;
}

void    ScalarConverter::printfloat(void) {
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "Float: " << _float << "f" << std::endl;
}

void    ScalarConverter::printdouble(void) {
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "Double: " << _double << std::endl;
}
