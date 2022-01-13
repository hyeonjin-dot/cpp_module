
#include "Zombie.hpp"

int main()
{
    int num = 10;
    Zombie *tmp = zombieHorde(num, "zombie");
   

    for(int i=0; i < num; i++)
        tmp[i].announce();
    delete[] tmp;
}
