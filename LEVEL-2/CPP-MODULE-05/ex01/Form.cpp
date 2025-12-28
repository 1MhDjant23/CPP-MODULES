#include "Form.hpp"
#include "Bureaucrat.hpp"

//------- Getters && Setters -------------

const std::string&	Form::getName() const {
	return name;
}
bool	Form::getBool() const {
	return isSigned;
}
unsigned int	Form::getSgrade() const {
	return Sgrade;
}
unsigned int	Form::getEgrade() const {
	return Egrade;
}

//------ Insertion Operator ----------

std::ostream&	operator<<( std::ostream& out, const Form& other ) {
	out << other.getName() << ", form grade required to sign it: " << other.getSgrade() << ", grade required to execute it: "
		<< other.getEgrade();
	if ( !other.getBool() )
		out << ". The form not signed!" << std::endl;
	else
		out << ". The form signed with success!" << std::endl;
	return out;
}

//------ Orhtodox Cannonical Form -----------------

Form::Form() : name("def"), isSigned(false), Sgrade(70), Egrade(10) { }

Form::Form( const std::string& name, unsigned int sGrade, unsigned int eGrade ) : name(name), isSigned(false), Sgrade(sGrade), Egrade(eGrade) {
	if ( this->Sgrade < 1 || this->Egrade < 1 )
		throw GradeTooHighException();
	else if ( this->Sgrade > 150 || this->Egrade > 150 )
		throw GradeTooLowException();
}

Form::Form( const Form& other ) : name(other.getName()), isSigned(other.getBool()), Sgrade(other.getSgrade()), Egrade(other.getEgrade()) { }

Form&	Form::operator=( const Form& other ) {
	if (this != &other)
		isSigned = other.getBool();
	return *this;
}
Form::~Form() {
	std::cout << getName() << " destroyed!" << std::endl;
}

//-------- Exception Handler ---------

const char*	Form::GradeTooHighException::what() const _NOEXCEPT {
	return "Form Exception detected:\nGrade Too High Exception (Grade Out Of Range!).";
}
const char*	Form::GradeTooLowException::what() const _NOEXCEPT {
	return "Form Exception detected:\nGrade Too Low Exception (Grade Out Of Range!).";
}

//-------- Other Method --------------

void	Form::beSigned( const Bureaucrat& bureaucrat ) {
	if ( bureaucrat.getGrade() > getSgrade() )
		throw GradeTooLowException();
	else if ( bureaucrat.getGrade() <= getSgrade() )
		isSigned = true;
}
