#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
int easyfind(T var, int number) {
    typename T::iterator it;
    it = std::find (var.begin(), var.end(), number);
    if (it != var.end())
        return 0;
    else
        return 1;
}



#endif