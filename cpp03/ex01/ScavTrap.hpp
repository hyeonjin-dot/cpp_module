#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &tmp);
    ~ScavTrap();

    ScavTrap & operator=(ScavTrap const &tmp);

    void		attack(std::string const& target);
	void		guardGuate(void);
};

#endif