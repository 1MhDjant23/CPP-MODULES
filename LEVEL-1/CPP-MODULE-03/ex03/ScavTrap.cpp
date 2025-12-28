#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "One ScavTrap is in the process of starting..." << std::endl;
}

ScavTrap::ScavTrap( const std::string& Name ) : ClapTrap( Name ) {
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->Name << " is on its way to start..." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap( other ) {
	std::cout << "ScavTrap " << this->Name << " is on its way to start..." << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& other ) {
	if (this != &other)
		ClapTrap::operator=( other );
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->Name << " die" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->Name << " has switched to Gate keeper mode now." << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {
	if(this->hitPoint <= 0 || this->energyPoint <= 0 || this->attackDamage > this->hitPoint)
        std::cout << this->Name << " can't do this attack!!" << std::endl;
    this->energyPoint--;
    this->hitPoint -= this->attackDamage;
    std::cout << "ScavTrap " << this->Name
			  << " attacks " << target
			  << ", causing " << this->attackDamage
			  << " points of damage!" << std::endl;
}
