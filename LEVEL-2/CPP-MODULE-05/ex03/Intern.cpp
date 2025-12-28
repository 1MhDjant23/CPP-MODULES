#include "Intern.hpp"

AForm*	shrubbery(const std::string& target) { return new ShrubberyCreationForm(target); }
AForm*	president(const std::string& target) { return new PresidentialPardonForm(target); }
AForm*	robotomy(const std::string& target) { return new RobotomyRequestForm(target); }

Intern::Intern() {}

Intern::~Intern() { std::cout << "Intern finish it's Job" << std::endl; }

Intern::Intern( const Intern& other ) { (void)other; }

Intern& Intern::operator=( const Intern& other ) { (void)other; return *this; }

AForm*  Intern::makeForm(const std::string& formName, const std::string& targetForm) {
	const std::string	formsArray[3] = { "robotomy request", "presidential pardon", "shrubbery creation" };

	AForm*	(*formCreators[3])(const std::string& target) = {robotomy, president, shrubbery};
	for (int i = 0; i < 3; i++)
	{
		if (formsArray[i] == formName) {
			std::cout << "Intern creates " << formName << std::endl;
			return formCreators[i](targetForm);
		}
	}
	std::cout << "Error: Form name " << formName << " dosn't exist." << std::endl;
	return NULL;
}
