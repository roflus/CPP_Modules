#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    RPN rpn(argv[1]);
    std::string::iterator it;
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
            if (rpn._stack.size() == 1)
            {
                std::cout << "Error" << std::endl;
                return 1;
            }
            _operator++;
            rpn.a = rpn._stack.top();
            rpn._stack.pop();
            rpn.b = rpn._stack.top();
            rpn._stack.pop();
            rpn._stack.push(rpn.operation(rpn.b, rpn.a, *it));
        }
        else if (isdigit(*it) > 0)
        {
            _operation++;
            rpn._stack.push(*it - '0');
        }
    }
    if (_operation != _operator + 1)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    std::cout << "Result: " << rpn._stack.top() << std::endl;
}