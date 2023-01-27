#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie{

    private:
        std::string _name;

    public:
        Zombie(void);
        ~Zombie(void);

        void announce(void);
        void nameZombie(std::string name);

};



#endif
