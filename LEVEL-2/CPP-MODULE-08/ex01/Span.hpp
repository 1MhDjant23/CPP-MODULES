#ifndef	__SPAN_HPP__
#define	__SPAN_HPP__

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

/*--------# Span Class #--------*/

class	Span {
	private:
		unsigned int		capacity;
		std::vector<int>	span;
		Span();
	public:
		Span( unsigned int N );
		~Span();
		Span( const Span& other );
		Span&	operator=(const Span& other);
		void	addNumber(int n);
		int		shortestSpan() const;
		int		longestSpan() const;
		const std::vector<int>&	getVect() const;
		unsigned int	getCapacity() const;
		void	diplay() const;
		void	addMoreNumber(const std::vector<int>::iterator& start, const std::vector<int>::iterator& final);

};

/*--------# Customized Exception For Span #--------*/

class	spanException : public std::exception {
	public:
		const char* what() const throw();
};


#endif