#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap//FragTrap, ScavTrap
{
private:
    std::string    new_name;//?
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();

    DiamondTrap&	operator=(DiamondTrap const& tmp);
    void whoAmI();
};



#endif