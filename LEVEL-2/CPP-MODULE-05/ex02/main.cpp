#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
	try {
		Bureaucrat	br("Djant", 137);
		Bureaucrat	br2("Jack", 2);
		{
			std::cout << "\n------- ShrubberyCreationForm ---------" << std::endl;
			ShrubberyCreationForm	shr("home");
			ShrubberyCreationForm	shr2("Coffe");
			br.signForm(shr);
			std::cout << br << std::endl;
			std::cout << shr << std::endl;
			br.executeForm(shr);
			br.decreaseGrade();
			br2.signForm(shr2);
			std::cout << shr2 << std::endl;
			br2.executeForm(shr2);
			std::cout << "\n===============================" << std::endl;
		}
		{
			std::cout << "\n------- RobotomyRequestForm ---------" << std::endl;
			RobotomyRequestForm	rbt("Car");
			
			std::cout << br << std::endl;
			std::cout << br2 << std::endl;
			std::cout << rbt << std::endl;
			br2.signForm(rbt);
			br2.executeForm(rbt);
			std::cout << rbt << std::endl;
			// br.signForm(rbt);
			// br.executeForm(rbt);
			br.increaseGrade();
			std::cout << rbt << std::endl;
			std::cout << br << std::endl;
			std::cout << "\n===============================" << std::endl;
		}
		{
			std::cout << "\n------- PresidentialPardonForm ---------" << std::endl;
			PresidentialPardonForm	prs;
			std::cout << prs << std::endl;
			br2.signForm(prs);
			br2.executeForm(prs);
			std::cout << "\n===============================" << std::endl;
		}
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	catch (const std::string& e) {
		std::cout << "File stream error:\n" << e << std::endl;
	}
	return 0;
}