#ifndef WANIMAL_HPP
#define WANIMAL_HPP

#include <iostream>

class WAnimal
{
private:

protected:
    std::string type;
public:
    WAnimal(void);
    WAnimal(const WAnimal &old_obj);
    WAnimal &operator = (const WAnimal &old_obj);
    virtual ~WAnimal(void);

    virtual void makeSound(void) const;
    std::string getType(void) const;
};

#endif