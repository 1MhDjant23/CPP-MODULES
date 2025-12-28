#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(5) { }

Bureaucrat::Bureaucrat( const std::string& name, unsigned int grade ) : name(name), grade(grade) {
	if ( this->grade < 1 )
		throw GradeTooHighException();
	else if ( this->grade > 150 )
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
	std::cout << name << " destroyed!" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) : name(other.getName()), grade(other.getGrade()) { }

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& other ) {
	if ( this != &other ) {
		grade = other.getGrade();
	}
	return *this;
}

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& other ) {
	out << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
	return out;
}

const std::string&	Bureaucrat::getName() const {
	return name;
}

unsigned int	Bureaucrat::getGrade() const {
	return grade;
}
//--------- Exception Handler -------------------
const char*	Bureaucrat::GradeTooHighException::what() const _NOEXCEPT{
	return "Grade Too High Exception: grade (Out Of Range)!";
}

const char*	Bureaucrat::GradeTooLowException::what() const _NOEXCEPT{
	return "Grade Too Low Exception: grade (Out Of Range)!";
}

//------ Increase - Decrease Grade -------------
void	Bureaucrat::increaseGrade() {
	if ( getGrade() <= 1 )
		throw GradeTooHighException();
	grade--;
}

void	Bureaucrat::decreaseGrade() {
	if ( getGrade() >= 150 )
		throw GradeTooLowException();
	grade++;
}

//-------- Form Signing -------------

void	Bureaucrat::signForm( Form& form ) const {
	if (form.getBool()) {
		std::cout << getName() << " already signed!" << std::endl;
		return ;
	}
	form.beSigned(*this);
	if ( form.getBool() )
		std::cout << getName() << " signed " << form.getName() << std::endl;
	else
		std::cout << getName() << " couldn't sign " << form.getName() << " because insuffisient garde" << std::endl;
}
