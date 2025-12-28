#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {	return ; }

Base*	generate(void) {
	Base*	basePtr = NULL;

	srand(static_cast<unsigned int>(time(NULL)));
	switch (rand() % 3) {
	case 0:
		basePtr = new A();	break;
	case 1:
		basePtr = new B();	break;
	case 2:
		basePtr = new C();	break;
	}
	return basePtr;
}

void	identify(Base* p) {
	if ( dynamic_cast<A*>(p) )
		std::cout << "Type of basePtr is \"A\"" << std::endl;
	else if ( dynamic_cast<B*>(p) )
		std::cout << "Type of basePtr is \"B\"" << std::endl;
	else if ( dynamic_cast<C*>(p) )
		std::cout << "Type of basePtr is \"C\"" << std::endl;
	else
		std::cout << "Unknown type of basePtr!" << std::endl;
}

void	identify(Base& p) {
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Type of baseRef is\"A\"" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Type of baseRef is \"B\"" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Type of baseRef is \"C\"" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	std::cout << "Unknown type of baseRef!" << std::endl;
}