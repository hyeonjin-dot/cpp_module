
#include "Zombie.hpp"

void    randomChump(std::string name)//stack
{
    Zombie newone = Zombie(name);
    newone.announce();
}