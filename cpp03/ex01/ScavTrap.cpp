#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    hit = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    hit = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " string constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &tmp):ClapTrap(tmp)
{
    hit = tmp.hit;
    energy = tmp.energy;
    damage = tmp.damage;
    std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << name << " attack " << target <<", causing " << damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGuate(void)
{
    std::cout << "Gate keeper mode!" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const &tmp)
{
    hit = tmp.hit;
    energy = tmp.energy;
    damage = tmp.damage;
    return (*this);
}