
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde = new Zombie[N];
    char    j;

    for (int i=0; i < N; i++)
    {
        j = i + '0';
        new Zombie(name + j);
        horde[i].announce();
    }
    return (horde);
}