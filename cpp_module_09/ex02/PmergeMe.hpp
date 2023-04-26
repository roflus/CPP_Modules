#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <algorithm>
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

    int _groupsize;
    std::string _input;
    time_t _vstart, _vend;
    double _vector_diff;
    double _list_diff;

    void    printer(std::vector<int> const &v, std::list<int> const &l);
    int     argumentCheck(std::string string); 

    void    insertionVector(std::vector<int> &v, int start, int q);
    void    mergeVector(std::vector<int> &v, int start, int end, int q);
    void    sortVector(std::vector<int> &v, int start, int end);

    void    sortList(std::list<int> &l);
};

#endif