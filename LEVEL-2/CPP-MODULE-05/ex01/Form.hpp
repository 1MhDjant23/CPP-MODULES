#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class	Bureaucrat;
class	Form {
	private:
		const std::string	name;
		bool				isSigned;
		const unsigned int	Sgrade;
		const unsigned int	Egrade;
	public:
		Form();
		Form( const std::string& name, unsigned int sGrade, unsigned int eGrade );
		Form( const Form& other );
		Form&	operator=( const Form& other );
		~Form();
		const std::string&	getName() const;
		bool				getBool() const;
		unsigned int		getSgrade() const;
		unsigned int		getEgrade() const;
		void				beSigned( const Bureaucrat& bureaucrat );
		class	GradeTooLowException : public	std::exception {
			public:
				const char*	what() const _NOEXCEPT;
		};
		class	GradeTooHighException : public	std::exception {
			public:
				const char*	what() const _NOEXCEPT;
		};
};

std::ostream&	operator<<( std::ostream& out, const Form& other );
#endif