#include "PmergeMe.hpp"

int ft_error(std::string string) {
    std::cout << "Error" << std::endl;
    std::cout << string << std::endl;
    return 1;
}

void printum(std::vector<int> &v, std::deque<int> &d) {
    std::vector<int>::iterator vit;
    std::deque<int>::iterator dit;
    for (vit = v.begin(), dit = d.begin(); vit != v.end(); vit++, dit++) {
        std::cout << "Vector: " << *vit;
        std::cout << " Deque:  " << *dit << std::endl;
    }
}


int main(int argc, char **argv)
{
    if (argc == 1)
        return (ft_error("no arguments given"));
    PmergeMe pm;
    std::vector<int> vector;
    std::deque<int> deque;
    timeval start, end;
    long Diff;
    unsigned long   temp = 0;
    int             value = 0;
    gettimeofday(&start, NULL);
    if (!pm.checkDuplicates(argv, argc))
        return (ft_error("Cannot have duplicates"));
    for(int i = 1; argc != 1; i++, argc--) {
        if (argv[i][0] == '-') 
            return (ft_error("Only takes positive integers"));
        if (!pm.argumentCheck(argv[i]))
            return (ft_error("Argument is not an integer"));
        temp = atol(argv[i]);
        if (temp > INT_MAX)
            return (ft_error("Argument exceeded INT_MAX"));
        pm._input += argv[i];
        pm._input += ' ';
        value = temp;
        deque.push_back(temp);
        vector.push_back(temp);
    }
    gettimeofday(&end, NULL);
    Diff = end.tv_usec - start.tv_usec; 
    pm.sortVector(vector, 0, vector.size() - 1);
    pm.sortDeque(deque, 0, deque.size() - 1);
    pm._vectorDiff += Diff;
    pm._dequeDiff += Diff;
    pm.printer(vector, deque);
}