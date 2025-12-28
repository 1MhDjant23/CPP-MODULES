#include "Base.hpp"
#include "A.hpp"

int	main() {
	std::cout << "_____ Identify Ptr ______" << std::endl;
	Base*	baseRef = generate();
	identify(*baseRef);
	std::cout << "_____ Identify Ref ______" << std::endl;

	Base*	basePtr;
	basePtr = generate();
	identify(basePtr);

	delete basePtr;
	delete baseRef;
	return 0;
}