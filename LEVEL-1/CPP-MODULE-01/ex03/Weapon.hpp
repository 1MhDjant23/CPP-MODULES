/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:42:15 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 12:39:06 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		Weapon( std::string typ);
		const	std::string&	getType() const;
		void	setType( std::string typ );
};

#endif