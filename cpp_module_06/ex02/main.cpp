#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(int argc, char **argv) {
    argv = NULL;
    if (argc != 1)
        return 1;
    std::cout << "------------- Class test (has type) -------------" << std::endl;
    Base *base = base->generate();
    Base &ref = *base;
    base->identify(base);
    base->identify(ref);
    delete base;

    std::cout << "------------- Base test (no type) -------------" << std::endl;
    Base *test = new Base;
    Base &refe = *test;
    base->identify(test);
    base->identify(refe);
    delete test;
    return EXIT_SUCCESS;
}