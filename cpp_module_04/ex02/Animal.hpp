#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
private:
    /* data */
protected:
    std::string type;
public:
    Animal(void);
    Animal(const Animal &old_obj);
    Animal &operator = (const Animal &old_obj);
    virtual ~Animal(void);

    virtual void makeSound(void) const = 0;
    std::string getType(void) const;
};

#endif