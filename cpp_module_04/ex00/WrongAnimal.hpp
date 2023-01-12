#ifndef WANIMAL_HPP
#define WANIMAL_HPP

#include <iostream>

class WAnimal
{
private:
    /* data */
protected:
    std::string type;
public:
    WAnimal(void);
    WAnimal(const WAnimal &old_obj);
    WAnimal &operator = (const WAnimal &old_obj);
    ~WAnimal(void);

    void makeSound(void) const;
    std::string getType(void) const;
};

#endif