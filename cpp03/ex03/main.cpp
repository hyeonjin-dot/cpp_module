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

    c.attack("b");
    b.takeDamage(c.getDamage());
    c.guardGuate();
    c.beRepaired(10);
    d.attack("c");
    c.takeDamage(d.getDamage());
    d.highFivesGuys();
    a.whoAmI();
}