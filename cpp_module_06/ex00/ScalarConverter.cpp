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
    _type = getType();
    if (_type == CHAR) {
        std::cout << "Char" << std::endl;

        castchar();
    }
    else if (_type == INT) {
        std::cout << "Int" << std::endl;

        castint();
    }
    else if (_type == DOUBLE) {
        std::cout << "Double" << std::endl;

        castdouble();
    }
    else if (_type == FLOAT) {
        std::cout << "Float" << std::endl;
        castfloat();
    }
    
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

    if (std::strtol(_input.c_str(), &end, 10) || atoi(_input.c_str()) == 0) {
        if (*end == '\0')
            return INT;
    }
    if (_input.size() == 1 && (isprint(_input[0]) && _input[0] >= 0 && _input[0] <=127))
        return CHAR;
    if (std::strtod(_input.c_str(), &end)) {
        if (*end == '\0')
            return DOUBLE;
    }
    if (std::strtof(_input.c_str(), &end)) {
        if (*end == 'f' && strlen(end) == 1)
            return FLOAT;
    }
    return ERROR;
}

void    ScalarConverter::castchar(void) {
    _char = static_cast<char>(_input[0]);
    _int = static_cast<int>(_char);
    _double = static_cast<double>(_char);
    _float = static_cast<float>(_char);
}

void    ScalarConverter::castint(void) {
    char *end;
    _tempdouble = static_cast<double>(std::strtod(_input.c_str(), &end));
    _int = static_cast<int>(atoi(_input.c_str()));
    _double = static_cast<double>(_int);
    _float = static_cast<float>(_int);
    _char = static_cast<char>(_int);
}

void    ScalarConverter::castfloat(void) {
    char *end;
    std::string string = _input.substr(0, _input.size() - 1);
    _tempdouble = static_cast<double>(std::strtod(_input.c_str(), &end));
    _float = static_cast<float>(std::strtof(_input.c_str(), &end));
    _char = static_cast<char>(_float);
    _int = static_cast<int>(_float);
    _double = static_cast<double>(_float);
}

void    ScalarConverter::castdouble(void) {
    char *end;
    _tempdouble = static_cast<double>(std::strtod(_input.c_str(), &end));
    _double = static_cast<double>(std::strtod(_input.c_str(), &end));
    _float = static_cast<float>(_double);
    _char = static_cast<char>(_double);
    _int = static_cast<int>(_double);
}

void    ScalarConverter::printchar(void) {
    std::cout << "Char: ";
    if (_int < 0 || _int > 127)
        std::cout << "impossible";
    else if (isprint(_char))
        std::cout << "'" << _char << "'";
    else
        std::cout << "non displayable";
    std::cout << std::endl;
}

void    ScalarConverter::printint(void) {
    std::cout << "Int: ";
    if ((_tempdouble < INT_MIN || _tempdouble > INT_MAX) || _input.compare("nan") == 0 || _input.compare("nanf") == 0)
        std::cout << "impossible" << std::endl;
    else
        std::cout << _int << std::endl;
}

void    ScalarConverter::printfloat(void) {
    std::cout << "Float: ";
    if ((_tempdouble < INT_MIN || _tempdouble > INT_MAX) && _type == INT)
        std::cout << "impossible" << std::endl;
    else {
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << _float << "f" << std::endl;
    }
}

void    ScalarConverter::printdouble(void) {
    std::cout << "Double: ";
    if ((_tempdouble < INT_MIN || _tempdouble > INT_MAX) && _type == INT)
        std::cout << "impossible" << std::endl;
    else {
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << _double << std::endl;
    }
}
