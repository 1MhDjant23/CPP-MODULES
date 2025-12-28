#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137), target("home") {}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : AForm("Shrubbery", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << getName() << " destructed!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other ) : AForm(other), target(other.target) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other ) {
	if (this != &other) {
		this->AForm::operator=(other);
		target = other.target;
	}
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if ( !this->getBool() || executor.getGrade() > this->getEgrade() )
		throw GradeTooLowException();
	std::ofstream	outfile(target + "_shrubbery");
	if (!outfile)
		throw std::string("Error, Could not create `" + target + "_shrubbery` file.");
	outfile <<  "    oxoxoo    ooxoo\n";
	outfile <<  "  ooxoxo oo  oxoxooo\n";
	outfile <<  " oooo xxoxoo ooo ooox\n";
	outfile <<  " oxo o oxoxo  xoxxoxo\n";
	outfile <<  "  oxo xooxoooo o ooo\n";
	outfile <<  "    ooo\\oo\\  /o/o\n";
	outfile <<  "        \\  \\/ /\n";
	outfile <<  "         |   /\n";
	outfile <<  "         |  |\n";
	outfile <<  "         | D|\n";
	outfile <<  "         |  |\n";
	outfile <<  "         |  |\n";
	outfile <<  "  ______/____\\____" << std::endl;
}
