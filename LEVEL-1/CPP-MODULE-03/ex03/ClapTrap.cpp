#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("def"), hitPoint(10), energyPoint(10), attackDamage(0) {    
    std::cout << "One ClapTrap about to start ..." << std::endl;
}

ClapTrap::ClapTrap( const std::string& Name ) : Name(Name), hitPoint(10), energyPoint(10), attackDamage(0) {
    std::cout << "Claptrap " << this->Name << " about to start ..." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->Name << " die!!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
    *this = other;
    std::cout << "Claptrap " << this->Name << " about to start ..." << std::endl;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& other  ) {
    if(this != &other)
    {
        this->Name = other.Name;
        this->hitPoint = other.hitPoint;
        this->energyPoint = other.energyPoint;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

void    ClapTrap::attack( const std::string& target )
{
    if(this->hitPoint <= 0 || this->energyPoint <= 0 || this->attackDamage > this->hitPoint)
        std::cout << this->Name << " can't do this attack!!" << std::endl;
    this->energyPoint--;
    this->hitPoint -= this->attackDamage;
    std::cout << "ClapTrap " << this->Name
			  << " attacks " << target
			  << ", causing " << this->attackDamage
			  << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (this->hitPoint <= 0 || static_cast<int>(amount) > this->hitPoint) {
        std::cout << this->Name << " can't take any damage more!!" << std::endl;
        return;
    }
    this->hitPoint -= amount;
    std::cout << "ClapTrap " << this->Name << ", take " << amount << " of damage!!" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if(this->energyPoint <= 0) {
        std::cout << this->Name << " can't be repaired !!" << std::endl;
        return;
    }
    this->energyPoint--;
    this->hitPoint += amount;
    std::cout << this->Name << " gets " << amount << " hit points back" << std::endl;
}

void    ClapTrap::displayStatus()
{
    std::cout << "ClapTrap " << this->Name << " have " << this->energyPoint << " Energy Point and " << this->hitPoint << " Hit Poins" << std::endl;
}

