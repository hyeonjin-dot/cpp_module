
#include "Zombie.hpp"

Zombie *newZombie(std::string name)//heap
{
    Zombie *newZombie = new Zombie(name);
    return (newZombie);
}