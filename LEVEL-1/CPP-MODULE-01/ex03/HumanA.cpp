/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:11:18 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 13:45:20 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& wepon ) : _name(name), _weapon(wepon) { }

void	HumanA::attack() {
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}
HumanA::~HumanA() {
	std::cout << "HumanA die !" << std::endl;
}