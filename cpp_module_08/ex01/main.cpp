#include "Span.hpp"

int main() {

    Span sp = Span(5);
    std::cout << "----- SPAN OF SIZE 5 -----" << std::endl;
    try
    {
        std::cout << "----- ADDING ONE NUMBER TO SPAN -----" << std::endl;
        sp.addNumber(6);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "----- ADDING MORE NUMBERS TO SPAN -----" << std::endl;
        sp.addNumber(8);
        sp.addNumber(2);
        sp.addNumber(14);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "----- ADDING TO MANY NUMBERS TO SPAN -----" << std::endl;
        sp.addNumber(8);
        sp.addNumber(2);
        sp.addNumber(14);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


    Span span = Span(11111);
    std::cout << "----- SPAN OF SIZE 11111 -----" << std::endl;
    try
    {
        std::cout << "----- ADDING MULTIPLE NUMBERS: 10000 -----" << std::endl;
        span.addMultiNumber(10000);
        std::cout << "----- ADDING MULTIPLE NUMBERS: 1111 -----" << std::endl;
        span.addMultiNumber(1111);
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}