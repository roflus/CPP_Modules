#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <class T>
class Array {
    private:
        T *_arr;
        unsigned int _size;
    public:
        Array() {
            std::cout << "Standard constructor called" << std::endl;
            _size = 0;
            _arr = new T[0];
        }
        Array(unsigned int n) {
            int *a = new int();
            _size = n;
            _arr = new T[_size];
            for (unsigned int i; i < _size; i++) {
                _arr[i] = *a;
            }
        }
        Array(const Array &old_obj) {
            std::cout << "Copy constructor called" << std::endl;
            *this = old_obj;
        }
        Array&operator=(const Array &old_obj) {
            std::cout << "Copy assignment operator called" << std::endl;
            _size = old_obj._size;
            _arr = new T[_size];
            for (unsigned int i; i < _size; i++) {
                _arr[i] = old_obj._arr[i];
            }
            return *this;
        }
        ~Array() {
            std::cout << "Deconstructor called" << std::endl;
            delete[] _arr;
        }

        class ArrayOutOfRangeException : public std::exception {
            public:
                const char *what() const throw () { return "Array is out of range";}
        };
        
        T&operator[](unsigned int size) const {
            if (size >= _size)
                throw ArrayOutOfRangeException();
            return _arr[size];
        };

        unsigned int size(void) {
            return (sizeof(*_arr) / sizeof(_arr[0]));
        }
        


};

#endif