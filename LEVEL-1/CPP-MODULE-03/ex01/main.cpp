#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap    scv("SCV");
    ClapTrap    *clp;
    ScavTrap    *scv1;

    clp = &scv;
    clp->displayStatus();
    clp->attack("DJT");
    scv1 = &scv;
    scv.attack("DJT");
    scv.displayStatus();
    scv1->displayStatus();
    scv1->attack("NIKI");
    scv1->displayStatus();
    scv1->beRepaired(30);
    scv1->displayStatus();
    scv1->guardGate();
    scv.guardGate();
    return 0;
}