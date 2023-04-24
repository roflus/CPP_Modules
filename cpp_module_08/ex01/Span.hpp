#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
    unsigned int _N;
    std::vector<int> _numbers;
public:
    Span(unsigned int N);
    Span(const Span &old_obj);
    Span &operator=(const Span &old_obj);
    ~Span();

    void    addNumber(int num);
    int     shortestSpan();
    int     longestSpan();

    void    addMultiNumber();

    class ClassIsFull : public std::exception{
        public:
            const char *what() const throw () { return "Can't add new element";}
    };

    class FindSpan : public std::exception{
        public:
            const char *what() const throw () { return "No span can be found";}
    };
};

#endif