#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &old_obj) {
    (void)old_obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &old_obj) {
    (void)old_obj;
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::printer(std::vector<int> const &v, std::list<int> const &l)
{
    std::cout << "Before: " << _input << std::endl;
    std::cout << "After: " << std::endl;
    std::cout << "Time to process a range of " << v.size() << " elements with std::[vector] : " << _vector_diff << std::endl;
    std::cout << "Time to process a range of " << l.size() << " elements with std::[list] : "  << std::endl;
}

int     PmergeMe::argumentCheck(std::string string) {
    for(size_t i = 0; i < string.size(); i++) {
        if (!isdigit(string[i]))
            return 0;
    }
    return 1;
}

void    PmergeMe::insertionVector(std::vector<int> &v, int start, int end) {
    for (int i = start; i < end; i++) {
        int temp = v[i + 1];
        int j = i + 1;
        while (j > start && v[j - 1] > temp) {
            v[j] = v[j -1];
            j--;
        }
        v[j] = temp;
    }
}

void    PmergeMe::mergeVector(std::vector<int> &v, int start, int end, int q){
    int size1 = q - start + 1;
    int size2 = end - q;
    std::vector<int> vleft, vright;
    for (int i = start; i < q + 1; i++)
        vleft[i] = v[i];
    for (int i = q + 1; i < end + 1; i++)
        vright[i] = v[i];
    int rindex = 0;
    int lindex = 0;
    for (int i = start; i < end - start + 1; i++) {
        if (rindex == size2) {
            v[i] = vleft[lindex];
            lindex++;
        }
        else if (lindex == size1) {
            v[i] = vright[rindex];
            rindex++;
        }
        else if (vright[rindex] > vleft[lindex]) {
            v[i] = vleft[lindex];
            lindex++;
        }
        else {
            v[i] = vright[rindex];
            rindex++;
        }
    }
}

void    PmergeMe::sortVector(std::vector<int> &v, int start, int end) {
    if (end - start > _groupsize) {
        int q = (start + end) / 2;
        sortVector(v, start, q);
        sortVector(v, q + 1, end);
        mergeVector(v, start, end, q);
    }
    else
        insertionVector(v, start, end);

}

