#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal(void);
        Animal(const Animal &old_obj);
        Animal &operator = (const Animal &old_obj);
        virtual ~Animal(void);

        virtual void makeSound(void) const = 0;
        std::string getType(void) const;
};

#endif