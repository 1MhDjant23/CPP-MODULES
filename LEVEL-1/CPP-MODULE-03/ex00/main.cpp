#include "ClapTrap.hpp"

int main()
{
    {
        ClapTrap    cp;

        cp.attack("enemy");
        cp.beRepaired(3);
        cp.takeDamage(11);
        cp.displayStatus();
    }
    std::cout << "=============" << std::endl;
    ClapTrap    cp2("test");

    cp2.attack("enemy2");
    cp2.takeDamage(10);
    cp2.beRepaired(7);
    cp2.displayStatus();
    return 0;
}