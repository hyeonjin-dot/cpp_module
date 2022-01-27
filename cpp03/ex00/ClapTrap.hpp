#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string     name;
    unsigned int    hit;
    unsigned int    energy;
    unsigned int    damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &tmp);
    ~ClapTrap();

    ClapTrap & operator=(ClapTrap const &tmp);

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    unsigned int getDamage() const;
};

#endif