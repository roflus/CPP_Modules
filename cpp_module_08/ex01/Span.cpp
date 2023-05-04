#include "Span.hpp"
#include "math.h"
#include <vector>

Span::Span(unsigned int N) : _N(N) {
    std::cout << "Default constructor called" << std::endl;
}

Span::Span(const Span &old_obj) : _N(old_obj._N) {
    std::cout << "Copy constructor called" << std::endl;
}

Span &Span::operator=(const Span &old_obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    _N = old_obj._N;
    return *this;
}

Span::~Span() {
    std::cout << "Deconstuctor called" << std::endl;
}

void    Span::addNumber(int num) {  
        if (_numbers.size() == _N)
            throw Span::ClassIsFull();
        _numbers.push_back(num);
}

int     Span::longestSpan() {
    if (_numbers.empty() || _numbers.size() == 1) {
        throw Span::FindSpan();
    }
    std::vector<int>::iterator _min;
    std::vector<int>::iterator _max;
    _min = std::min_element(_numbers.begin(), _numbers.end());
    _max = std::max_element(_numbers.begin(), _numbers.end());
    return (*_max - *_min);
}

int     Span::shortestSpan() {
    if (_numbers.empty() || _numbers.size() == 1) {
        throw Span::FindSpan();
    }
    std::vector<int>::iterator it;
    int diff = INT_MAX;
    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());
    for (it = tmp.begin(); it != tmp.end() - 1; ++it) {
        if ((*(it + 1) - *it) < diff)
            diff = (*(it + 1) - *it);
    }
    return diff;
}

void    Span::addMultiNumber(int amount) {
    std::cout << "Adding multiple numbers" << std::endl;
    std::srand((unsigned) std::time(NULL));
    for (int i = 0; i < amount; i++) {
        addNumber(std::rand() % 100);
    }
}