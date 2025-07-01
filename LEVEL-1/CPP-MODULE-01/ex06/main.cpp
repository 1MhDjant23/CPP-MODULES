/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:20:30 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/02 13:43:26 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int ac, char **av )
{
	if ( ac != 2 ) {
		std::cerr << "enter one of the following four levels: " << "`DEBUG`, `INFO`, `WARNING` or `ERROR`" << std::endl;
		exit (1);
	}
	Harl	harlObj;
	harlObj.complain( av[1] );
	return (0);
}