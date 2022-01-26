#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Roy");
    ScavTrap c("HJ");

    c.attack("b");
    b.takeDamage(c.getDamage());
    c.guardGuate();
    c.beRepaired(10);
}