#ifndef	AFORM_HPP
#define	AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	AForm {
	private:
		const std::string	name;
		bool				isSigned;
		const unsigned int	Sgrade;
		const unsigned int	Egrade;
	public:
		AForm();
		AForm( const std::string& name, unsigned int sGrade, unsigned int eGrade );
		AForm( const AForm& other );
		AForm&	operator=( const AForm& other );
		virtual	~AForm();
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
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<( std::ostream& out, const AForm& other );
#endif