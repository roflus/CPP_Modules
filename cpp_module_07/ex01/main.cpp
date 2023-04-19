#include "iter.hpp"

int main(void) {
    std::cout << "------------------------- Int array -------------------------" << std::endl;
    std::cout << "Int array, first we wil use print, then add, then print again" << std::endl;
    int array[5] = {0, 1, 2, 3, 4};
    ::iter(array, 5, print);
    ::iter(array, 5, add);
    std::cout << std::endl;
    ::iter(array, 5, print);

    std::cout << "------------------------- float array -------------------------" << std::endl;
    std::cout << "Int array, first we wil use print, then add, then print again" << std::endl;
    float arr[5] = {0.4, 1.2, 2.9, 3.3, 4.6};
    ::iter(arr, 5, print);
    ::iter(arr, 5, add);
    std::cout << std::endl;
    ::iter(arr, 5, print);

    std::cout << "------------------------- String array -------------------------" << std::endl;
    std::cout << "String array, first we wil use print, then add, then print again" << std::endl;
    std::string _array[5] = {"een", "twee", "drie", "vier", "vijf"};
    ::iter(_array, 5, print);
    ::iter(_array, 5, changeString);
    std::cout << std::endl;
    ::iter(_array, 5, print);
    exit(EXIT_SUCCESS);
}