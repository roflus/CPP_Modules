# include "easyfind.hpp"
# include <vector>
# include <list>
# include <deque>

int main(int , char **) {
    std::cout << "----------------Vector Int-----------------" << std::endl;
    std::vector<int> numbers;
    numbers.insert(numbers.begin(), 42);
    numbers.insert(numbers.end(), 2);
    try {
        std::cout << "Easyfind: " << *::easyfind(numbers, 6) << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << '\n';
    }
    numbers.push_back(54);
    numbers.push_back(5);
    numbers.push_back(22);
    try {
        std::cout << "Easyfind: " << *::easyfind(numbers, 22) << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << '\n';
    }

    std::cout << "----------------Vector char-----------------" << std::endl;
    std::vector<char> chars;
    chars.insert(chars.begin(), 'a');
    chars.insert(chars.end(), 'b');
    try {
        std::cout << "Easyfind: " <<  *::easyfind(chars, 'c') << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << '\n';
    }
    chars.push_back('d');
    chars.push_back('e');
    chars.push_back('f');
    try {
        std::cout << "Easyfind: " << *::easyfind(chars, 'e') << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << '\n';
    }

    std::cout << "----------------List Int-----------------" << std::endl;
    std::list<int> lnumbers;
    lnumbers.insert(lnumbers.begin(), 4);
    lnumbers.insert(lnumbers.end(), 2);
    try {
        std::cout << "Easyfind: " <<  *::easyfind(lnumbers, 3) << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << '\n';
    }
    lnumbers.push_back(54);
    lnumbers.push_back(5);
    lnumbers.push_back(22);
    try {
        std::cout << "Easyfind: " << *::easyfind(lnumbers, 5) << std::endl;
    }
    catch(NotFound &e){
        std::cerr << e.what() << '\n';
    }

    std::cout << "----------------List char-----------------" << std::endl;
    std::list<char> lchars;
    lchars.insert(lchars.begin(), 'a');
    lchars.insert(lchars.end(), 'b');
    try {
        std::cout << "Easyfind: " <<  *::easyfind(lchars, 'a') << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << '\n';
    }
    lchars.push_back('d');
    lchars.push_back('e');
    lchars.push_back('f');
    try {
        std::cout << "Easyfind: " << *::easyfind(lchars, 5) << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << '\n';
    }
}