#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &old_obj) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &old_obj) {}

PmergeMe::~PmergeMe() {}

template <typename T, typename C>
void PmergeMe::printer(T vector, C list)
{
    std::cout << "Before: " << std::endl;
    std::cout << "After: " << std::endl;
    std::cout << "Time to process a range of " << vector.size() << " elements with std::[vector] : " << _vector_diff << std::endl;
    std::cout << "Time to process a range of " << list.size() << " elements with std::[vector] : " << _list_diff << std::endl;
}