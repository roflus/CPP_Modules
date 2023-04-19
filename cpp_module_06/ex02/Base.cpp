#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void) {}

Base    *Base::generate(void) {
    std::srand((unsigned) std::time(NULL));
    int random = rand() % 3;
    if (random == 0) {
        return (new A);
    }
    if (random == 1) {
        return (new B);
    }
    else {
        return (new C);
    }
}

void    Base::identify(Base *p) {
    if (dynamic_cast<A*>(p))
        std::cout << "Type: A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type: B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type: C" << std::endl;
    else
        std::cout << "No type" << std::endl;
}

void    Base::identify(Base &p) {
    int i = 0;
    try
    {
        A &ref = dynamic_cast<A&>(p);
        std::cout << "Type: A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &ref = (dynamic_cast<B&>(p));
            std::cout << "Type: B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C &ref = dynamic_cast<C&>(p);
                std::cout << "Type: C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << "No type" << std::endl;  
            }
        }
    }
}