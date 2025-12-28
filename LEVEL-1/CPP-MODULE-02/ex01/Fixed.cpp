/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:07:11 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/08 21:30:22 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fracBits = 8;

Fixed::Fixed() : fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=( const Fixed& newObj ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &newObj )
		this->fixedPoint = newObj.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	return (this->fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {
	this->fixedPoint = raw;
}
/*	other member	*/

Fixed::Fixed( const int num ) : fixedPoint( num << fracBits ) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float point ) : fixedPoint( static_cast<int>( roundf( point * ( 1 << fracBits )) ) ) {
	std::cout << "Float constructor called" << std::endl;
}

float	Fixed::toFloat( void ) const {
	return ( static_cast<float>( this->fixedPoint ) / ( 1 << fracBits ) );
}

int	Fixed::toInt( void ) const {
	return ( this->fixedPoint / ( 1 << fracBits ) );
}

std::ostream&	operator<<( std::ostream& os, const Fixed& obj ) {
	os << obj.toFloat();
	return os;
}