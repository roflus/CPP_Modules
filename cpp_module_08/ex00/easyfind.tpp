# include "easyfind.hpp"

const char *NotFound::what() const throw() {
    return ("Can't find input given");
}

template <typename T>
typename T::iterator easyfind(T &var, int number) {
    typename T::iterator it;
    it = std::find(var.begin(), var.end(), number);
    if (it == var.end())
        throw NotFound();
    return it;
}