#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Roboto", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ): AForm("Roboto", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other ) : AForm(other), target(other.target) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& other ) {
	if (this != &other) {
		this->AForm::operator=(other);
		this->target = other.target;
	}
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << this->getName() << " destructed" << std::endl;
}

//---------------- Executor ---------------
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if ( !this->getBool() || executor.getGrade() > getEgrade())
		throw GradeTooLowException();
	if ( time(NULL) % 2 )
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}