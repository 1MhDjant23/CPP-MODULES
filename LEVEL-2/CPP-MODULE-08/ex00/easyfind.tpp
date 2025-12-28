#include "easyfind.hpp"

template <typename T>
void	easyfind(T p, int nb) {
	typename T::iterator	temp = std::find(p.begin(), p.end(), nb);
	if (temp != p.end())
		std::cout << *temp << " exist inside the container" << std::endl;
	else
		throw easyFoundException();
}

const char*	easyFoundException::what() const throw() {
	return "NotFoundExceptionDetected.";
}