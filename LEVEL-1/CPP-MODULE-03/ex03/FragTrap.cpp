#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "One FragTrap is in the process of starting..." << std::endl;
}

FragTrap::FragTrap( const std::string& Name ) : ClapTrap( Name ) {
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->Name << " is on its way to start..." << std::endl;
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap( other ) {
	std::cout << "FragTrap " << this->Name << " is on its way to start..." << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& other ) {
	if ( this != &other )
		ClapTrap::operator=( other );
	return *this;	
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->Name << " requests a high-five! 🖐️" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->Name << " destroyed!" << std::endl;
}