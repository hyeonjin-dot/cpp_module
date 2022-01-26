#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    new_name = name + "_clap_name";//?
}

DiamondTrap::DiamondTrap(std::string name)
{
}

DiamondTrap::~DiamondTrap()
{
}

void    DiamondTrap::whoAmI()
{
    std::cout << "my DiamondTrap name is " << name << " my ClapTrap name is " << new_name << std::endl; //?
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const& tmp)//?
{
    hit = tmp.hit;
    energy = tmp.energy;
    damage = tmp.damage;
    return (*this);
}