#include "RPN.hpp"

RPN::RPN(std::string input) : _input(input) {}

RPN::RPN(const RPN &old_obj) : _input(old_obj._input) {}

RPN &RPN::operator=(const RPN &old_obj)
{
    _input = old_obj._input;
    return *this;
}

RPN::~RPN() {}

int RPN::isOperator(char c)
{
    if (c == '+' || c == '-' || c == '/' || c == '*')
        return 1;
    return 0;
}

int RPN::operation(int a, int b, char c)
{
    if (c == '+')
        return (a + b);
    if (c == '-')
        return (a - b);
    if (c == '/')
        return (a / b);
    else
        return (a * b);
}