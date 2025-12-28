#ifndef	SERIALIZATION_HPP
#define	SERIALIZATION_HPP

#include <iostream>
#include <cstdint>

struct Data
{
	int		x;
	int		y;
	char	c;
	bool	stat;
};


class	Serializer {
	private:
		Serializer();
		Serializer( const Serializer& other );
		~Serializer();
		Serializer&	operator=( const Serializer& other );
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif