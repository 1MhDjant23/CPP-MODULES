#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class	Bureaucrat
{
	private:
		const	std::string	name;
		unsigned int		grade;
	public:
		Bureaucrat();
		Bureaucrat( const std::string& name, unsigned int grade );
		Bureaucrat( const Bureaucrat& other );
		Bureaucrat&	operator=( const Bureaucrat& other );
		~Bureaucrat();
		const std::string&	getName() const;
		unsigned int		getGrade() const;
		void	increaseGrade();
		void	decreaseGrade();
		class GradeTooHighException : public std::exception {
			public:
				const char*	what() const _NOEXCEPT;
		};
		class	GradeTooLowException : public std::exception {
			public:
				const char*	what() const _NOEXCEPT;
		};
		void	signForm( Form& form ) const;
};

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& other );
#endif