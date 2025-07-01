/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 21:00:55 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 15:09:58 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	size = 5;
	int	i = 0;

	Zombie	*zombi = zombieHorde( size, "Djant" );
	while ( i < size )
		zombi[ i++ ].announce();
	delete [] zombi;
	return (0);
}
