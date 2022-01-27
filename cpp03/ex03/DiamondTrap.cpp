#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap("nonamed_clap_name"), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap " << name << " default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap " << name << " default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " destructor called" << std::endl;
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

void DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);//다중상속이라
}