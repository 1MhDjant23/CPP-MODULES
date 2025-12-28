#include "ScalarConverter.hpp"
#include "parse.hpp"

int	main(int ac, char **av) {
	if ( ac != 2 ) {
		std::cerr << "Usage: ./cast number/or char" << std::endl;
		return 1;
	}
	ScalarConverter::convert(static_cast<std::string>(av[1]));
	return 0;
}
