/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:27:55 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/08 17:55:28 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
Point::Point() : x(0), y(0) { }

Point::~Point() {}

Point::Point( const float fl1, const float fl2 ) : x(fl1), y(fl2) { }

Point::Point( const Point& other ) : x(other.x), y(other.y) { }

Point&	Point::operator=( const Point& obj ) {
	(void)obj;
	return *this;
}

Fixed	Point::getXX( void ) const {
	return this->x;
}

Fixed	Point::getYY( void ) const {
	return this->y;
}

Fixed	calculateArea( const Point a, const Point b, const Point c ) {

	Fixed	area = (a.getXX() * ( b.getYY() - c.getYY() ) + b.getXX() * ( c.getYY() - a.getYY() ) + c.getXX() * ( a.getYY() - b.getYY() ))/2;
	return (area < 0 ? area * -1 : area);
}

void	Point::printBolean( bool stat, std::string name ) {
	(stat == true ? (std::cout << name << " inside the triangle." << std::endl) : (std::cout << name << " is vertex or on edge." << std::endl));
}


