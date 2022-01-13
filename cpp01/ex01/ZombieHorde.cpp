
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde = new Zombie(name);
    
    for (int i=0; i < N; i++)
        horde->announce();
}