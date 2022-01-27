#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ClapTrap b("Roy");
    ScavTrap c("HJ");
    FragTrap d("frog");
    DiamondTrap a("dia");

    DiamondTrap tmp(a);
    std::cout << std::endl;
    a.attack("b");
    a.takeDamage(c.getDamage());
    a.guardGuate();
    a.beRepaired(10);
    a.attack("c");
    a.takeDamage(d.getDamage());
    a.highFivesGuys();
    a.whoAmI();
}