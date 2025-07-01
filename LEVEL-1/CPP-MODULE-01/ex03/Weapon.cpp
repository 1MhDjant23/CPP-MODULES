/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:33:59 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 12:39:01 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() { }

Weapon::Weapon( std::string typ ) {
	this->type = typ;
}

const	std::string&	Weapon::getType() const {
	return (this->type);
}
void	Weapon::setType( std::string typ ) {
	this->type = typ;
}