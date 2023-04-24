# include "easyfind.hpp"
# include <vector>
# include <list>
# include <deque>

int main(int , char **) {
    std::cout << "----------------Vector Int-----------------" << std::endl;
    std::vector<int> numbers;
    numbers.insert(numbers.begin(), 4);
    numbers.insert(numbers.end(), 2);
    if (::easyfind(numbers, 4) == 0)
        std::cout << "Found the right number" << std::endl;
    else
        std::cout << "Could not find the right number" << std::endl;
    numbers.push_back(54);
    numbers.push_back(5);
    numbers.push_back(22);
    if (::easyfind(numbers, 5) == 0)
        std::cout << "Found the right number" << std::endl;
    else
        std::cout << "Could not find the right number" << std::endl;

    std::cout << "----------------Vector char-----------------" << std::endl;
    std::vector<char> chars;
    chars.insert(chars.begin(), 'a');
    chars.insert(chars.end(), 'b');
    if (::easyfind(chars, 'a') == 0)
        std::cout << "Found the right char" << std::endl;
    else
        std::cout << "Could not find the right char" << std::endl;
    chars.push_back('d');
    chars.push_back('e');
    chars.push_back('f');
    if (::easyfind(chars, 'd') == 0)
        std::cout << "Found the right char" << std::endl;
    else
        std::cout << "Could not find the right char" << std::endl;

    std::cout << "----------------List Int-----------------" << std::endl;
    std::list<int> lnumbers;
    lnumbers.insert(lnumbers.begin(), 4);
    lnumbers.insert(lnumbers.end(), 2);
    if (::easyfind(lnumbers, 4) == 0)
        std::cout << "Found the right number" << std::endl;
    else
        std::cout << "Could not find the right number" << std::endl;
    lnumbers.push_back(54);
    lnumbers.push_back(5);
    lnumbers.push_back(22);
    if (::easyfind(lnumbers, 54) == 0)
        std::cout << "Found the right number" << std::endl;
    else
        std::cout << "Could not find the right number" << std::endl;

    std::cout << "----------------List char-----------------" << std::endl;
    std::list<char> lchars;
    lchars.insert(lchars.begin(), 'a');
    lchars.insert(lchars.end(), 'b');
    if (::easyfind(lchars, 'a') == 0)
        std::cout << "Found the right char" << std::endl;
    else
        std::cout << "Could not find the right char" << std::endl;
    lchars.push_back('d');
    lchars.push_back('e');
    lchars.push_back('f');
    if (::easyfind(lchars, 'd') == 0)
        std::cout << "Found the right char" << std::endl;
    else
        std::cout << "Could not find the right char" << std::endl;

    std::cout << "----------------Deque Int-----------------" << std::endl;
    std::list<int> dnumbers;
    dnumbers.insert(dnumbers.begin(), 4);
    dnumbers.insert(dnumbers.end(), 2);
    if (::easyfind(dnumbers, 4) == 0)
        std::cout << "Found the right number" << std::endl;
    else
        std::cout << "Could not find the right number" << std::endl;
    dnumbers.push_back(54);
    dnumbers.push_back(5);
    dnumbers.push_back(22);
    if (::easyfind(dnumbers, 299) == 0)
        std::cout << "Found the right number" << std::endl;
    else
        std::cout << "Could not find the right number" << std::endl;

    std::cout << "----------------Deque char-----------------" << std::endl;
    std::list<char> dchars;
    dchars.insert(dchars.begin(), 'a');
    dchars.insert(dchars.end(), 'b');
    if (::easyfind(dchars, 'a') == 0)
        std::cout << "Found the right char" << std::endl;
    else
        std::cout << "Could not find the right char" << std::endl;
    dchars.push_back('d');
    dchars.push_back('e');
    dchars.push_back('f');
    if (::easyfind(dchars, 'y') == 0)
        std::cout << "Found the right char" << std::endl;
    else
        std::cout << "Could not find the right char" << std::endl;
}