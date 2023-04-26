#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    RPN rpn(argv[1]);
    int a = 0, b = 0;
    std::string::iterator it;
    std::stack<int> _stack;
    int _operator = 0, _operation = 0;
    for (it = rpn._input.begin(); it != rpn._input.end(); it++)
    {
        if (*it == ' ')
            continue;
        if (!isdigit(*it) && !rpn.isOperator(*it))
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
        if (rpn.isOperator(*it) == 1)
        {
            if (_stack.size() == 1)
            {
                std::cout << "Error" << std::endl;
                return 1;
            }
            _operator++;
            a = _stack.top();
            _stack.pop();
            b = _stack.top();
            _stack.pop();
            _stack.push(rpn.operation(b, a, *it));
        }
        else if (isdigit(*it) > 0)
        {
            _operation++;
            _stack.push(*it - '0');
        }
    }
    if (_operation != _operator + 1)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    std::cout << "Result: " << _stack.top() << std::endl;
}