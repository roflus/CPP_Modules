#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog(void);
        Dog(const Dog &old_obj);
        Dog &operator=(const Dog &old_obj);
        ~Dog(void);

        void    makeSound(void) const;
};

#endif