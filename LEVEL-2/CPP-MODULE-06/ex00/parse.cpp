#include "parse.hpp"

t_type	isPseaudoLiteral(const std::string& inp) {
	int	count = 3;
	const std::string	floatLiteral[] = {"-inff", "+inff", "nanf"};
	const std::string	doubleLiteral[] = {"-inf", "+inf", "nan"};
	
	for (int i = 0; i < count; i++) {
		if (floatLiteral[i] == inp)
			return FLOATLITERAL;
	}
	count = 3;
	for (int i = 0; i < count; i++) {
		if (doubleLiteral[i] == inp)
			return DOUBLELITERAL;		
	}
	return LITERAL;
}

void	pseudoLiteral(const std::string& input, t_type type) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (type == DOUBLELITERAL)
		std::cout << "float: " << input + "f" << std::endl;
	else
		std::cout << "float: " << input << std::endl;
	if (type == FLOATLITERAL)
		std::cout << "double: " << input.substr(0, input.length() - 1) << std::endl;
	else
		std::cout << "double: " << input << std::endl;
	exit(EXIT_SUCCESS);
}

void	toChar(const std::string& input) {
	printChar(input[0]);
	std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(input[0]) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(input[0]) << std::endl;
	exit(EXIT_SUCCESS);
}

void	toScalar(double x) {
	printDChar(x);
	if (x > std::numeric_limits<int>::max() || x < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(x) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(x) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(x) << std::endl;
	exit(EXIT_SUCCESS);
}

t_type	detectType(const std::string& input) {
	t_type	pseudo = isPseaudoLiteral(input);

	if (pseudo != LITERAL)
		pseudoLiteral(input, pseudo);
	if (input.length() == 1 && !std::isdigit(input[0]))
		return CHAR;	
	if (!thereIsPoint(input))
		return INT;
	if (isFloat(input))
		return FLOAT;
	return DOUBLE;
}
