#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain(void);
        Brain(const Brain &old_obj);
        Brain &operator = (const Brain &old_obj);
        ~Brain();

        std::string _ideas[100];
};

#endif