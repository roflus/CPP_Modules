#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
private:

public:
    Cat(void);
    Cat(const Cat &old_obj);
    Cat &operator = (const Cat &old_obj);
    ~Cat(void);

    void    makeSound(void) const;
};

#endif