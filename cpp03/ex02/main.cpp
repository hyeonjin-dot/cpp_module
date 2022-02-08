#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Roy");
    ScavTrap c("HJ");
    FragTrap d("frog");

    std::cout << std::endl;
    c.attack("b");
    b.takeDamage(c.getDamage());
    c.guardGuate();
    c.beRepaired(10);
    d.attack("c");
    c.takeDamage(d.getDamage());
    d.highFivesGuys();
}