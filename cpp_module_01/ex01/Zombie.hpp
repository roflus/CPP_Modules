#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <sstream>
# include <iostream>
# include <string>

class Zombie{

    public:
        Zombie(void);
        ~Zombie(void);

        void announce(void);
        void nameZombie(std::string name);
    private:
        std::string name;

};



#endif
