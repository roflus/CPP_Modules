#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
    _vectorDiff = 0;
    _dequeDiff = 0;
}

PmergeMe::PmergeMe(const PmergeMe &old_obj) {
    _input = old_obj._input;
    _vectorDiff = old_obj._vectorDiff;
    _dequeDiff = old_obj._dequeDiff;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &old_obj) {
    _input = old_obj._input;
    _vectorDiff = old_obj._vectorDiff;
    _dequeDiff = old_obj._dequeDiff;
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::printer(std::vector<int> &v, std::deque<int> &d)
{
    std::vector<int>::iterator vit; 
    std::cout << "Before: " << _input << std::endl;
    std::cout << "After:  ";
    for (vit = v.begin(); vit != v.end(); vit++) {
        std::cout << *vit << ' ';
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << v.size() << " elements with std::vector : " << _vectorDiff << std::endl;
    std::cout << "Time to process a range of " << d.size() << " elements with std::deque : "  << _dequeDiff << std::endl;
}

int     PmergeMe::argumentCheck(std::string string) {
    for(size_t i = 0; i < string.size(); i++) {
        if (!isdigit(string[i]))
            return 0;
    }
    return 1;
}

static int stringCheck(char **argv, std::string string, int index, int argc) {
    for (int i = index + 1; i < argc; i++) {
        if (atoi(string.c_str()) - atoi(argv[i]) == 0)
            return 0;
    }
    return 1;
}

int     PmergeMe::checkDuplicates(char **argv, int argc) {

    for (int i = 1; i < argc; i++) {
        std::string string = argv[i];
        if (stringCheck(argv, string, i, argc) == 0)
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
    std::vector<int> vleft(size1), vright(size2);
    for (int i = 0; i < size1; i++)
        vleft[i] = v[start + i];
    for (int i = 0; i < size2; i++)
        vright[i] = v[q + i + 1];
    int rindex = 0;
    int lindex = 0;
    for (int i = start; i <= end; i++) {
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
    timeval vstart, vend;
    gettimeofday(&vstart, NULL);
    if (end - start > 5) {
        int q = (start + end) / 2;
        sortVector(v, start, q);
        sortVector(v, q + 1, end);
        mergeVector(v, start, end, q);
    }
    else
        insertionVector(v, start, end);
    gettimeofday(&vend, NULL);
    _vectorDiff = vend.tv_usec - vstart.tv_usec;
}

void    PmergeMe::insertionDeque(std::deque<int> &d, int start, int end) {
    for (int i = start; i < end; i++) {
        int temp = d[i + 1];
        int j = i + 1;
        while (j > start && d[j - 1] > temp) {
            d[j] = d[j -1];
            j--;
        }
        d[j] = temp;
    }
}
void    PmergeMe::mergeDeque(std::deque<int> &d, int start, int end, int q) {
    int size1 = q - start + 1;
    int size2 = end - q;
    std::deque<int> dleft(size1), dright(size2);
    for (int i = 0; i < size1; i++)
        dleft[i] = d[start + i];
    for (int i = 0; i < size2; i++)
        dright[i] = d[q + i + 1];
    int rindex = 0;
    int lindex = 0;
    for (int i = start; i < end - start + 1; i++) {
        if (rindex == size2) {
            d[i] = dleft[lindex];
            lindex++;
        }
        else if (lindex == size1) {
            d[i] = dright[rindex];
            rindex++;
        }
        else if (dright[rindex] > dleft[lindex]) {
            d[i] = dleft[lindex];
            lindex++;
        }
        else {
            d[i] = dright[rindex];
            rindex++;
        }
    }
}
void    PmergeMe::sortDeque(std::deque<int> &d, int start, int end) {
    timeval dstart, dend;
    gettimeofday(&dstart, NULL);
    if (end - start > 5) {
        int q = (start + end) / 2;
        sortDeque(d, start, q);
        sortDeque(d, q + 1, end);
        mergeDeque(d, start, end, q);
    }
    else
        insertionDeque(d, start, end);
    gettimeofday(&dend, NULL);
    _dequeDiff = dend.tv_usec - dstart.tv_usec;
}
