/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:28:43 by mait-taj          #+#    #+#             */
/*   Updated: 2025/03/08 17:56:09 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	bool	stat;

	Fixed	abcArea(calculateArea(a, b, c));
	Fixed	abxArea(calculateArea(a, b, point));
	Fixed	acxArea(calculateArea(a, c, point));
	Fixed	cbxArea(calculateArea(c, b, point));
	
	stat = abcArea > 0 &&  abxArea > 0 && cbxArea > 0  &&  acxArea > 0;
	return ( abcArea == abxArea + cbxArea + acxArea && stat);
}