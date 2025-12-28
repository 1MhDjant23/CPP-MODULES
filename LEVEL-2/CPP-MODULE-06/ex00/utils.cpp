#include "parse.hpp"

bool	displayableChar(char c) {	return (c >= 32 && c <= 126) ? true : false;	}

void	displayImpossible(void) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
	exit(EXIT_FAILURE);
}

bool	thereIsPoint(const std::string& inp) {
	if (inp.length() >= 2 ) {
		size_t	dot = inp.find('.');
		if (dot == std::string::npos)
			return false;
		return true;
	}
	return false;
}

bool	isFloat(const std::string& input) {
	size_t	pos = input.find('f');
	if (pos == std::string::npos)
		return true;
	return false;
}

void	validFloatPoint(const std::string& inp) {
	size_t	pos = inp.find('.');
	if (pos == std::string::npos)
		return ;
	if (!std::isdigit(inp[pos + 1]) || !std::isdigit(inp[pos - 1]))
		displayImpossible();
}

void	printChar(char c) {
	if (static_cast<int>(c) > std::numeric_limits<char>::max() || static_cast<int>(c) < std::numeric_limits<char>::min())
		std::cout << "char:  impossible" << std::endl;
	else if (!displayableChar(c))
		std::cout << "char:  Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
}

void	printDChar(double db) {
	if (db > std::numeric_limits<char>::max() || db < std::numeric_limits<char>::min())
		std::cout << "char:  impossible" << std::endl;
	else if (!displayableChar(db))
		std::cout << "char:  Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(db) << "'" << std::endl;
}