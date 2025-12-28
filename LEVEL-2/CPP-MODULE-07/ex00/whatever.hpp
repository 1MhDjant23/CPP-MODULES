#ifndef	WHATEVER_HPP
#define	WHATEVER_HPP

#include <iostream>

template	<typename T>
void	swap(T& a, T& b) {
	T	temp = a;
	a = b;
	b = temp;
}

template	<typename S>
S	min(S a, S b) {	return (a < b ? a : b);	}

template	<typename U>
U	max(U x, U y) {	return (x > y ? x : y);	}

#endif