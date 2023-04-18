#include "ScalarConverter.hpp"

std::string ScalarConverter::_input = "\0";
int ScalarConverter::_type = 0;
char ScalarConverter::_char = 0;
int ScalarConverter::_int = 0;
float ScalarConverter::_float = 0;
double ScalarConverter::_double = 0;
double ScalarConverter::_tempdouble = 0;
bool ScalarConverter::_imp = false;


int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Error: ./covert takes only 1 argument" << std::endl;
        return 1;
    }
    std::string string = argv[1];
    ScalarConverter::convert(string);
    return 0;
}