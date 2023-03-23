#ifndef WCAT_HPP
#define WCAT_HPP

#include "WrongAnimal.hpp"

class WCat: public WAnimal
{
    public:
        WCat(void);
        WCat(const WCat &old_obj);
        WCat &operator=(const WCat &old_obj);
        ~WCat(void);

        void    makeSound(void) const;
};

#endif