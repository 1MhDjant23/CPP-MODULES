/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 21:01:04 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 11:45:40 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class	Zombie
{
	private:
		std::string	_name;
	public:
		Zombie( std::string name );
		Zombie();
		~Zombie();
		void	announce();
		void	setName( std::string Name );
};

Zombie	*zombieHorde( int N, std::string name );
#endif