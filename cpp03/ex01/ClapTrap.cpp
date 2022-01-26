#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("nonamed"), hit(10), energy(10), damage(0)
{
    std::cout << "ClapTrap " << name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name), hit(10), energy(10), damage(0)
{
    std::cout << "ClapTrap " << name << " string constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << name << " attack " << target <<", causing " << damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (energy <= amount)
    {
        std::cout << "ClapTrap " << name << " is dead." << std::endl;
        energy = 0;
    }
    else
    {
        energy = energy - amount;
        std::cout << "ClapTrap " << name << " got " << amount << " points of damage!" << std::endl;
        std::cout << "ClapTrap " << name << " has " << energy << " points of energy!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    energy = energy + amount;
    std::cout << "ClapTrap " << name << " got " << amount << " points of energy!" << std::endl;
    std::cout << "ClapTrap " << name << " has " << energy << " points of energy!" << std::endl;
}


unsigned int ClapTrap::getDamage() const
{
    return (damage);
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &tmp)
{
    hit = tmp.hit;
    energy = tmp.energy;
    damage = tmp.damage;
    return (*this);
}
