#include "Array.hpp"

template <typename T>
Array<T>::Array() {
    std::cout << "Standard constructor called" << std::endl;
    _size = 0;
    _arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n) {
    T *temp = new T();
    _size = n;
    _arr = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
    {
        _arr[i] = *temp;
    }
    delete temp;
}

template <typename T>
Array<T>::Array(const Array &old_obj) {
    std::cout << "Copy constructor called" << std::endl;
    _arr = NULL;
    *this = old_obj;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &old_obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    _size = old_obj._size;
    delete[] _arr;
    _arr = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
    {
        _arr[i] = old_obj._arr[i];
    }
    return *this;    
}

template <typename T>
Array<T>::~Array() {
    std::cout << "Deconstructor called" << std::endl;
    delete[] _arr;   
}

template <typename T>
const char *Array<T>::ArrayOutOfRangeException::what(void) const throw() {
    return ("Array is out of range");
}

template <typename T>
T&  Array<T>::operator[](unsigned int size) const {
    if (size >= _size)
        throw ArrayOutOfRangeException();
    return _arr[size];
}

template <typename T>
unsigned int Array<T>::size(void) {
    return _size;
}


