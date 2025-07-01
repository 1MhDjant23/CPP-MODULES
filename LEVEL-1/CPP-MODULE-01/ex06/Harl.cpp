/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:23:38 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/02 14:07:59 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() { }

Harl::~Harl() { }

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]\n" 
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]\n"
		<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
		<< std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]\n"
		<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
		<< std::endl;
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]\n"
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}
int	getIndex( std::string& level ) {
	int	i = 0;
	std::string	arrays[ 4 ] = { "DEBUG" , "INFO" , "WARNING" , "ERROR" };
	while ( i < 4 ) {
		if ( level == arrays[ i ] )
			return (i);
		i++;
	}
	return (i);
}

void	Harl::complain( std::string level ) {
	int	index = getIndex( level );
	void	( Harl::*harlPtr[ 4 ] )() = { 
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	 };
	switch (index)
	{
	case 0:
		(this->*harlPtr[0])();
	case 1:
		(this->*harlPtr[1])();
	case 2:
		(this->*harlPtr[2])();
	case 3:
		(this->*harlPtr[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	
}