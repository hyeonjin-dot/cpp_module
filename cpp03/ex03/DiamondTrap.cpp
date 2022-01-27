#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap("nonamed_clap_name"), ScavTrap(), FragTrap()
{
    new_name = "nonamed";
    std::cout << "DiamondTrap " << new_name << " default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    new_name = name;
    std::cout << "DiamondTrap " << new_name << " default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &tmp):ClapTrap(tmp), ScavTrap(tmp), FragTrap(tmp)
{
    new_name = tmp.new_name;
    std::cout << "DiamondTrap " << new_name << " copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << new_name << " destructor called" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "my DiamondTrap name is " << new_name << " my ClapTrap name is " << name << std::endl; //?
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