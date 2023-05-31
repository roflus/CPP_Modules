#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
private:
    T *_arr;
    unsigned int _size;

public:
    Array();
    Array(unsigned int n);
    Array(const Array &old_obj);
    Array &operator=(const Array &old_obj);
    ~Array();

    class ArrayOutOfRangeException : public std::exception
    {
        public:
            const char *what() const throw();
    };

    T& operator[](unsigned int size) const;
    unsigned int size(void);
};

#include "Array.tpp"
#endif