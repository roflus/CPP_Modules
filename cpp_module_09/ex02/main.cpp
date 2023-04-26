#include "PmergeMe.hpp"

int ft_error(std::string string) {
    std::cout << "Error" << std::endl;
    std::cout << string << std::endl;
    return 1;
}

void printum(std::vector<int> &v, std::list<int> &l) {
    std::vector<int>::iterator vit;
    std::list<int>::iterator lit;
    for (vit = v.begin(), lit = l.begin(); vit != v.end(); vit++, lit++) {
        std::cout << "Vector: " << *vit;
        std::cout << " List: " << *lit << std::endl;
    }
}


int main(int argc, char **argv)
{
    if (argc == 1)
        return (ft_error("no arguments given"));
    PmergeMe pm;
    std::vector<int> vector;
    std::list<int> list;
    std::clock_t _start = std::clock();
    unsigned long   temp = 0;
    int             value = 0;
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
        list.push_back(temp);
        vector.push_back(temp);
    }
    printum(vector, list);
    pm.sortVector(vector, 0, vector.size() - 1);
    std::cout << "na sort" << std::endl;
    printum(vector, list);
    std::clock_t _end = std::clock();
    pm._vector_diff = difftime(_end, _start) / CLOCKS_PER_SEC;
    pm.printer(vector, list);
}