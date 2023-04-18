#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void) {
    srand((unsigned) time(NULL));
    int random = rand() % 3;
    if (random == 0) {
        A *_class;
        return _class;
    }
    if (random == 1) {
        B *_class;
        return _class;
    }
    else {
        C *_class;
        return _class;
    }
}

void    identify(Base *p) {
    std::cout << "Type: " << std::endl;
}

void    identify(Base &p) {

}