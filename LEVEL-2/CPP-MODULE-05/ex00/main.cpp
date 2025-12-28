#include "Bureaucrat.hpp"

int main(){
	try
	{
		Bureaucrat	bb("Djant", 150);
		Bureaucrat	ll;
		
		bb.increaseGrade();
		ll = bb;
		std::cout << ll << std::endl;
		std::cout << "grade is: " << bb.getGrade() << std::endl;
		std::cout << bb << std::endl;
	}
	catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}