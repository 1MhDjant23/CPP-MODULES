/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:51:32 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 10:42:30 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie nik("NRC");
	Zombie	*zombie1;
	Zombie	*zomb2 = newZombie("GUATE");
	zomb2->announce();
	
	nik.announce();
	zombie1 = newZombie("DJANT");
	zombie1->announce();
	randomChump("FOO");
	delete zombie1;
	delete zomb2;
	return (0);
}