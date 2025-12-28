#include "Bureaucrat.hpp"

int main(){
	try {
		Bureaucrat	bureaucrat("Djant", 1);
		Form	form("Home", 2, 101);

		bureaucrat.decreaseGrade();
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		std::cout << "sign again!" << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}