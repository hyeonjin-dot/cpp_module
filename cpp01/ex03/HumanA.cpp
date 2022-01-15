#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

void    HumanA::attack()
{
    std::cout << this->name << " attack with " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}
