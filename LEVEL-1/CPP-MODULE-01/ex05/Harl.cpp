/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:29:45 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 18:05:02 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() { };

Harl::~Harl() { };

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void	Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
		<< std::endl;
}

void	Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
		<< std::endl;
}

void	Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

int	getIndex( std::string& level ) {
	int	index = 0;
	std::string	array[ 4 ] = { "DEBUG" , "INFO" , "WARNING" , "ERROR" };
	while ( index < 4 )
	{
		if ( array[ index ] == level )
			return (index);
		index++;
	}
	return (index);
}

void	Harl::complain( std::string level ) {

	int		index;
	index = getIndex( level );
	void	(Harl::*harlPtr[4])( void );
	harlPtr[0] = &Harl::debug;
	harlPtr[1] = &Harl::info;
	harlPtr[2] = &Harl::warning;
	harlPtr[3] = &Harl::error;
	switch ( index ) {
	case 0: 
		(this->*harlPtr[0])();
		break;
	case 1:
		(this->*harlPtr[1])(); 
		break;
	case 2:
		(this->*harlPtr[2])();
		break;
	case 3:
		(this->*harlPtr[3])();
		break;
	}
}