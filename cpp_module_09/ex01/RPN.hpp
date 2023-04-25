#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
// Stack or deque
class RPN
{
private:
public:
    RPN(std::string _input);
    RPN(const RPN &old_obj);
    RPN &operator=(const RPN &old_obj);
    ~RPN();

    std::string _input;
    std::stack<int> _stack;
    int a;
    int b;

    int addNumber(int first, int second);
    int isOperator(char c);
    int operation(int a, int b, char c);
};

#endif