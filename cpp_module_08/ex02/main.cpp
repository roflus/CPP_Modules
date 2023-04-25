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

    std::cout << "---------Vector Test---------" << std::endl;
    std::vector<int> vstack;
    vstack.push_back(5);
    vstack.push_back(17);
    std::cout << "Top: " << vstack.back() << std::endl;
    vstack.pop_back();
    std::cout << "Size: " << vstack.size() << std::endl;
    vstack.push_back(3);
    vstack.push_back(5);
    vstack.push_back(737);
    //[...]
    vstack.push_back(0);
    std::vector<int>::iterator vlit = vstack.begin();
    std::vector<int>::iterator vlite = vstack.end();
    ++vlit;
    --vlit;
    while (vlit != vlite)
    {
        std::cout << "List: ";
        std::cout << *vlit << std::endl;
        ++vlit;
    }
    std::vector<int> v(vstack);
    return 0;
}