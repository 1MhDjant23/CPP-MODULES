#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential", 25, 5), target("prisoner") { }

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ) : AForm("Presidential", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other ) : AForm(other), target(other.target) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& other ) {
	if (this != &other) {
		AForm::operator=(other);
		target = other.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << getName() << " has been destroyed!" << std::endl;
}
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!getBool() || executor.getGrade() > getEgrade())
		throw GradeTooLowException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
