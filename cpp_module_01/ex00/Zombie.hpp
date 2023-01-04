#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <sstream>
# include <iostream>
# include <string>

class Zombie{

    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
    private:
        std::string name;

};



#endif
