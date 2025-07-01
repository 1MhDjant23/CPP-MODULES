/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:09:15 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 13:49:42 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string nam ) : name(nam) { }

HumanB::~HumanB() {
	std::cout << "HumanB die !" << std::endl;
}

void	HumanB::setWeapon( Weapon &wepon ) {
	_weapon = &wepon;
}

void	HumanB::attack() {
	std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
}