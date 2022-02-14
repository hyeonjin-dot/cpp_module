#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap("nonamed_clap_name"), FragTrap(), ScavTrap()
{
    new_name = "nonamed";
    this->FragTrap::hit = 100;
	this->ScavTrap::energy = 50;
	this->FragTrap::damage = 30;
    std::cout << "DiamondTrap " << new_name << " default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    new_name = name;
    this->FragTrap::hit = 100;
	this->ScavTrap::energy = 50;
	this->FragTrap::damage = 30;
    std::cout << "DiamondTrap " << new_name << " default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &tmp):ClapTrap(tmp), FragTrap(tmp), ScavTrap(tmp)
{
    *this = tmp;
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

DiamondTrap & DiamondTrap::operator=(DiamondTrap const& tmp)
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