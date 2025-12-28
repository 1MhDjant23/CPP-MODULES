/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:29:52 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/05 11:45:11 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					fixedPoint;
	static const int	fracBits;
public:
	Fixed& operator=( const Fixed& newObj );//original one
	Fixed();
	Fixed( const int num );//original one
	Fixed( const float point );//original one
	Fixed( const Fixed &other );// original one
	~Fixed();
	int 	getRawBits( void ) const;//original one
	void 	setRawBits( int const raw );//original one
	float	toFloat( void ) const;//original one
	int		toInt( void ) const;//original one
	static	Fixed&	min( Fixed& fix1, Fixed& fix2 );
	const static	Fixed&	min( const Fixed& fix1, const Fixed& fix2 );
	static	Fixed&	max( Fixed& fix1, Fixed& fix2 );
	const static	Fixed&	max( const Fixed& fix1, const Fixed& fix2 );
	bool	operator>( const Fixed& rightObj ) const;
	bool	operator<( const Fixed& rightObj ) const;
	bool	operator>=( const Fixed& rightObj );
	bool	operator<=( const Fixed& rightObj );
	bool	operator==( const Fixed& rightObj );
	bool	operator!=( const Fixed& rightObj );
	Fixed	operator+( const Fixed& rightObj );
	Fixed	operator-( const Fixed& rightObj );
	Fixed	operator*( const Fixed& rightObj );
	Fixed	operator/( const Fixed& rightObj );
	Fixed&	operator++();
	Fixed&	operator--();
	Fixed	operator++( int );
	Fixed	operator--( int );
};

std::ostream&	operator<<( std::ostream &os, const Fixed& obj );//original one

#endif
