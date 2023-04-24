#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(void) : std::stack<T>()
    {
        std::cout << "Default constructor called" << std::endl;
    };
    MutantStack(MutantStack const &old_obj) : std::stack<T>(old_obj)
    {
        std::cout << "Copy constructor called" << std::endl;
        *this = old_obj;
    };
    MutantStack &operator=(MutantStack const &old_obj)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        (void)old_obj;
        return *this;
    }
    ~MutantStack()
    {
        std::cout << "Deconstructor called" << std::endl;
    };

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
    reverse_iterator rbegin()
    {
        return this->c.rbegin();
    }
    reverse_iterator rend()
    {
        return this->c.rend();
    }
};

#endif