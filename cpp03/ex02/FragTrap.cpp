#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    hit = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap " << name << " default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    hit = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap " << name << " default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destructor called" << std::endl;
}

 void FragTrap::highFivesGuys(void)
 {
     std::cout << name << " requests highfive!" << std::endl;
 }