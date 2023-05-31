#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(){
    std::cout << "Default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &old_obj) {
    std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
};

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &old_obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    (void)old_obj;
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {
    std::cout << "Deconstructor called" << std::endl;
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return this->c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
    return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
    return this->c.rend();
}