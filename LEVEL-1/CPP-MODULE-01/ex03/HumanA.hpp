/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:50:31 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 13:45:25 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class	HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA( std::string nam, Weapon& wepon );
		~HumanA();
		void	attack();
};

#endif