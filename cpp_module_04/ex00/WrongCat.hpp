#ifndef WCAT_HPP
#define WCAT_HPP

#include "WrongAnimal.hpp"

class WCat: public WAnimal
{
private:

public:
    WCat(void);
    WCat(const WCat &old_obj);
    ~WCat(void);
};

#endif