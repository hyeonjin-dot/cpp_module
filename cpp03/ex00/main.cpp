#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Roy");
    ClapTrap c("HJ");

    c.attack("b");
    b.takeDamage(c.getDamage());
    c.beRepaired(10);
}