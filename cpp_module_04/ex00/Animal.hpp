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
    ~Animal(void);

    void makeSound(void) const;
    std::string getType(void) const;
};

#endif