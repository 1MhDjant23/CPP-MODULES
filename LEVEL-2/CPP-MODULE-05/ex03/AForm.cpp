#include "AForm.hpp"
#include "Bureaucrat.hpp"

//------- Getters && Setters -------------

const std::string&	AForm::getName() const {
	return name;
}
bool	AForm::getBool() const {
	return isSigned;
}
unsigned int	AForm::getSgrade() const {
	return Sgrade;
}
unsigned int	AForm::getEgrade() const {
	return Egrade;
}

//------ Insertion Operator ----------

std::ostream&	operator<<( std::ostream& out, const AForm& other ) {
	out << other.getName() << ", form grade required to sign it: " << other.getSgrade() << ", grade required to execute it: "
		<< other.getEgrade();
	if ( !other.getBool() )
		out << ". The form not signed!" << std::endl;
	else
		out << ". The form signed with success!" << std::endl;
	return out;
}

//------ Orhtodox Cannonical AForm -----------------

AForm::AForm() : name("def"), isSigned(false), Sgrade(70), Egrade(10) { }

AForm::AForm( const std::string& name, unsigned int sGrade, unsigned int eGrade ) : name(name), isSigned(false), Sgrade(sGrade), Egrade(eGrade) {
	if ( this->Sgrade < 1 || this->Egrade < 1 )
		throw GradeTooHighException();
	else if ( this->Sgrade > 150 || this->Egrade > 150 )
		throw GradeTooLowException();
}

AForm::AForm( const AForm& other ) : name(other.getName()), isSigned(other.getBool()), Sgrade(other.getSgrade()), Egrade(other.getEgrade()) { }

AForm&	AForm::operator=( const AForm& other ) {
	if (this != &other)
		isSigned = other.getBool();
	return *this;
}
AForm::~AForm() {
	std::cout << getName() << " destroyed!" << std::endl;
}

//-------- Exception Handler ---------

const char*	AForm::GradeTooHighException::what() const _NOEXCEPT {
	return "Form Exception detected:\nGrade Too High Exception (Grade Out Of Range!).";
}
const char*	AForm::GradeTooLowException::what() const _NOEXCEPT {
	return "Form Exception detected:\nGrade Too Low Exception (Grade Out Of Range!).";
}

//-------- Other Method --------------

void	AForm::beSigned( const Bureaucrat& bureaucrat ) {
	if ( bureaucrat.getGrade() > getSgrade() )
		throw GradeTooLowException();
	else if ( bureaucrat.getGrade() <= getSgrade() )
		isSigned = true;
}
