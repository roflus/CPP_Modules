#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain(void);
        Brain(const Brain &old_obj);
        Brain &operator = (const Brain &old_obj);
        ~Brain();

        std::string getIdeas(int i) const;
        void        setIdea(std::string string, int i);
};

#endif