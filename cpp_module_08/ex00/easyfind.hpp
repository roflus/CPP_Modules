#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <stdlib.h>

class NotFound: public std::exception {
    public:
        const char *what() const throw();
};

template <typename T>
typename T::iterator easyfind(T &var, int number);

# include "easyfind.tpp"

#endif