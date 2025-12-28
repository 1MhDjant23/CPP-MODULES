#ifndef	ARRAY_HPP
#define	ARRAY_HPP

#include <iostream>
#include <exception>

template	<class T>
class	Array {
	private:
		T*	element;
		size_t sizeOfArray;
	public:
		T&	operator[]( unsigned int index );
		const T&	operator[]( unsigned int index ) const;
		Array();
		Array( unsigned int n );
		Array( const Array& other );
		Array&	operator=( const Array& other );
		~Array();
		size_t	size() const;
};

#include "Array.tpp"

#endif