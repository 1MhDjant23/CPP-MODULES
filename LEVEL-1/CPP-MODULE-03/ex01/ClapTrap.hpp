#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class   ClapTrap
{
    protected:
        std::string Name;
        int         hitPoint;
        int         energyPoint;
        int         attackDamage;
    public:
        ClapTrap();
        ClapTrap( const std::string& Name );
        ~ClapTrap();
        ClapTrap( const ClapTrap& other );
        ClapTrap&   operator=( const ClapTrap& other ); 
        void    attack( const std::string& target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
        void    displayStatus();
};

#endif
