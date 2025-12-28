#ifndef	PARSE_HPP
#define	PARSE_HPP

#include "ScalarConverter.hpp"
#include <sstream>
#include <iomanip>

typedef	enum	type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	FLOATLITERAL,
	DOUBLELITERAL,
	LITERAL
} 	t_type;

void	printDChar(double db);
void	printChar(char c);
void	toChar(const std::string& input);
void	toScalar(double x);
t_type	detectType(const std::string& input);
bool	thereIsPoint(const std::string& inp);
bool	isFloat(const std::string& input);
void	validFloatPoint(const std::string& inp);
void	displayImpossible(void);
void	pseudoLiteral(const std::string& input, t_type type);

#endif