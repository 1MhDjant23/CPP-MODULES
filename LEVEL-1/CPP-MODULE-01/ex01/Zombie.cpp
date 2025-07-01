/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:11:30 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 11:47:39 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { }

Zombie::Zombie( std::string name ) {
	_name = name;
}

Zombie::~Zombie() {
	std::cout << _name << "  destroyed." << std::endl;
}

void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::setName( std::string Name ) {
	this->_name = Name;
}