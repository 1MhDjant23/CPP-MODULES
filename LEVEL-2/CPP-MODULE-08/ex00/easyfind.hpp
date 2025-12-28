#ifndef __EASYFIND_HPP__
#define	__EASYFIND_HPP__

#include <iostream>
#include <exception>
#include <list>
#include <vector>
#include <algorithm>

template <typename T>
void	easyfind(T param, int a);

class	easyFoundException : public std::exception {
	public:
		const char*	what() const throw();
};

#include "easyfind.tpp"

#endif
