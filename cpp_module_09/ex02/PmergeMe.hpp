#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <sys/time.h>
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

    std::string _input;
    long _vectorDiff;
    long _dequeDiff;

    void    printer(std::vector<int> &v, std::deque<int> &d);
    int     argumentCheck(std::string string);
    int     checkDuplicates(char **argv, int argc);

    void    insertionVector(std::vector<int> &v, int start, int q);
    void    mergeVector(std::vector<int> &v, int start, int end, int q);
    void    sortVector(std::vector<int> &v, int start, int end);

    void    insertionDeque(std::deque<int> &d, int start, int q);
    void    mergeDeque(std::deque<int> &d, int start, int end, int q);
    void    sortDeque(std::deque<int> &d, int start, int end);

    // void    insertionList(std::list<int> &l, int start, int q);
    // void    mergeList(std::list<int> &l, int start, int end, int q);
    // void    sortList(std::list<int> &l, int start, int end);


};

#endif