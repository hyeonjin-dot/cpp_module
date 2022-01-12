
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

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif