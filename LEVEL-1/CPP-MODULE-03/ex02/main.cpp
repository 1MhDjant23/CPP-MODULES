#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap    frg("FRAG++");
    FragTrap    frr(frg);
    frg.attack("NIKI");
    frg.takeDamage(70);
    frg.beRepaired(30);
    frg.attack("DJT");
    frg.displayStatus();
    frr.attack("DJT");
    frr.displayStatus();
    frr.highFivesGuys();
    frg.highFivesGuys();
    return 0;
}