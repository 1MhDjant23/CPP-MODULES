#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap() , FragTrap() {
	this->energyPoint = 50;
	std::cout << "DiamondTrap starting it's operation" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& Name ) : ClapTrap( Name + "_clap_name" ), ScavTrap( Name ), 
	FragTrap( Name ), Name( Name ) {
		this->energyPoint = 50;
	std::cout << "DiamondTrap " << this->Name << " starting it's operation" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ) : ClapTrap( other ) {
	*this = other;
	std::cout << "DiamondTrap " << this->Name << " starting it's operation" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other ) {
	if ( this != &other ) {
		ClapTrap::operator=( other );
		this->Name = other.Name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->Name << " died!" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "i'm " << this->Name << " soon of " << ClapTrap::Name << std::endl;
}
