#ifndef WANIMAL_HPP
#define WANIMAL_HPP

#include <iostream>

class WAnimal
{
    protected:
        std::string _type;
    public:
        WAnimal(void);
        WAnimal(const WAnimal &old_obj);
        WAnimal &operator = (const WAnimal &old_obj);
        virtual ~WAnimal(void);

        void makeSound(void) const;
        std::string getType(void) const;
};

#endif