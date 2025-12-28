#ifndef	DIAMONDTRAP_HPP
#define	DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, public  FragTrap
{
	private:
		std::string	Name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap( const std::string& Name );
		DiamondTrap( const DiamondTrap& other );
		DiamondTrap&	operator=( const DiamondTrap& other );
		void	whoAmI();
};

#endif