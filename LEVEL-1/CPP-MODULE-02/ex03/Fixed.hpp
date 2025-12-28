/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:29:52 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/14 19:02:48 by mait-taj         ###   ########.fr       */
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
	Fixed& operator=( const Fixed& newObj );		//original one
	Fixed();	//original one
	Fixed( const int num );		//original one
	Fixed( const float point );		//original one
	Fixed( const Fixed &other );// original one
	~Fixed();	//original one
	int 	getRawBits( void ) const;		//original one
	void 	setRawBits( int const raw );		//original one
	float	toFloat( void ) const;		//original one
	int		toInt( void ) const;		//original one
	static	Fixed&	min( Fixed& fix1, Fixed& fix2 );		//original one
	const static	Fixed&	min( const Fixed& fix1, const Fixed& fix2 );		//original one
	static	Fixed&	max( Fixed& fix1, Fixed& fix2 );		//original one
	const static	Fixed&	max( const Fixed& fix1, const Fixed& fix2 );		//original one
	bool	operator>( const Fixed& rightObj );		//original one
	bool	operator<( const Fixed& rightObj );		//original one
	bool	operator>=( const Fixed& rightObj );		//original one
	bool	operator<=( const Fixed& rightObj );		//original one
	bool	operator==( const Fixed& rightObj );		//original one
	bool	operator!=( const Fixed& rightObj );		//original one
	Fixed	operator+( const Fixed& rightObj );		//original one
	Fixed	operator-( const Fixed& rightObj );		//original one
	Fixed	operator*( const Fixed& rightObj );		//original one
	Fixed	operator/( const Fixed& rightObj );		//original one
	Fixed&	operator++();		//original one
	Fixed&	operator--();		//original one
	Fixed	operator++( int );		//original one
	Fixed	operator--( int );		//original one
};

std::ostream&	operator<<( std::ostream &os, const Fixed& obj );		//original one

#endif
