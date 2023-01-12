#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
private:

public:
    Dog(void);
    Dog(const Dog &old_obj);
    ~Dog(void);
};

#endif