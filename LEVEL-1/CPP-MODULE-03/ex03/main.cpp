#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap dm("DMD");

    dm.displayStatus();
    dm.attack("NIUKI");
    dm.takeDamage(55);
    dm.beRepaired(55);
    dm.attack("SVK");
    dm.whoAmI();

    return 0;
}