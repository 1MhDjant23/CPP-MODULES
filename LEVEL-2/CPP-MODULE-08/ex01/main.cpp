#include "Span.hpp"

int	main() {
	std::cout << "#_________________# Intra Tests #_________________#" << std::endl;
	{
		Span sp = Span(5);
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			sp.addNumber(12);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "#_________________# Own Tests #_________________#" << std::endl;
	{
	std::vector<int>	vect(10000, 999);
	Span	sp(100);
	try
	{
		sp.addMoreNumber(vect.begin(), vect.end());
		sp.diplay();
		sp.addNumber(22);
		}
		catch( const std::exception& e ) {
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}