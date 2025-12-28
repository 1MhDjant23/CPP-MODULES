#include "ScalarConverter.hpp"
#include "parse.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter( const ScalarConverter& other ) {	(void)other;	}
ScalarConverter&	ScalarConverter::operator=( const ScalarConverter& other ) {	(void)other;	return *this;	}

void	ScalarConverter::convert( const std::string& str ) {
	std::string	temp(str);
	validFloatPoint(str);

	t_type	typeOfInput = detectType(str);
	if (typeOfInput == CHAR)
		toChar(str);
	if (str[str.length() - 1] == 'f')
		temp = str.substr(0, str.length() - 1);
	double	db;
	std::istringstream	strm(temp);
	strm >> db;
	if (std::isinf(db)) {
		std::string	pseudo = (db > 0 ? "+inf" : "-inf");
		pseudoLiteral(pseudo, DOUBLELITERAL);
	}
	if (!strm.eof() || strm.fail()) {
		displayImpossible();
	}
	toScalar(db);
}
