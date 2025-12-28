/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:21:43 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/08 17:57:53 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"



int	main( void ) {
	{
		Point	a(0, 0);
		Point	b(10 , 30);
		Point	c(20 , 0);
		Point	P1(10, 15);//this Point inside triangle.
		Point::printBolean( bsp( a, b, c, P1 ), "P1" );
	}
	std::cout << "____________________________________________\n" << std::endl;
	{
		Point	a(0, 0);
		Point	b(10 , 30);
		Point	c(20 , 0);
		Point	P2(30, 15);//this Point Outside triangle.
		Point::printBolean( bsp( a, b, c, P2 ), "P2");
	}
	std::cout << "____________________________________________\n" << std::endl;
	{
		Point	a(1, 8);
		Point	b(10 , 12);
		Point	c(11 , 5);
		Point	P3(4, 8);//this Point Inside triangle.
		Point::printBolean( bsp( a, b, c, P3 ), "P3");
	}
	std::cout << "____________________________________________\n" << std::endl;
	{
		Point	a(5, 5);
		Point	b(4 , 6);
		Point	c(2 , 2);
		Point	P4(1, 1);//this Point Outside triangle.
		Point::printBolean( bsp( a, b, c, P4 ), "P4");
	}
	return 0;
}