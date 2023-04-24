#include "MutantStack.hpp"
#include <vector>
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "Stack: ";
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "---------List Test---------" << std::endl;
    std::list<int> lstack;
    lstack.push_back(5);
    lstack.push_back(17);
    std::cout << "Top: " << lstack.back() << std::endl;
    lstack.pop_back();
    std::cout << "Size: " << lstack.size() << std::endl;
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    //[...]
    lstack.push_back(0);
    std::list<int>::iterator lit = lstack.begin();
    std::list<int>::iterator lite = lstack.end();
    ++lit;
    --lit;
    while (lit != lite)
    {
        std::cout << "List: ";
        std::cout << *lit << std::endl;
        ++lit;
    }
    std::list<int> l(lstack);
    return 0;
}