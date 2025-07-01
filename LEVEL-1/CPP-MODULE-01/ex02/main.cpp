/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:22:22 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/23 12:05:49 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	*stringPTR = &str;
	
	std::string	&stringREF = str;
	
	std::cout << "memory address of the str  " << &str << std::endl;
	std::cout << "memory address of the stringPTR  " << stringPTR << std::endl;
	std::cout << "memory address of the stringREF  " << &stringREF << std::endl;
	
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std:: cout << stringREF << std::endl;
	return (0);
}