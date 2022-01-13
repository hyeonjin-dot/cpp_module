
#include "Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void    Zombie::get_name(std::string name)
{
    this->name = name;
}

void    Zombie::announce()
{
    std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " is dead" << std::endl;
}