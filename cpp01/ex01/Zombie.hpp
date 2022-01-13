
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private :
        std::string name;

    public :
        void    announce();
        ~Zombie();
        Zombie(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif