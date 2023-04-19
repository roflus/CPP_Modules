#include <cstdlib>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(int argc, char **argv) {
    argv = NULL;
    if (argc != 1)
        return 1;
    Base *base = base->generate();
    Base &ref = *base;
    base->identify(base);
    base->identify(ref);
    delete base;
    return 0;
}