#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <ctime>
// Vector and list
class PmergeMe
{
private:
    /* data */
public:
    PmergeMe();
    PmergeMe(const PmergeMe &old_obj);
    PmergeMe &operator=(const PmergeMe &old_obj);
    ~PmergeMe();

    time_t _vstart, _vend;
    double _vector_diff;
    double _list_diff;

    template <typename T, typename C>
    void printer(T vector, C list);
};

#endif