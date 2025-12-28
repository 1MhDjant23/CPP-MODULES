#include "Iter.hpp"

void	increment(int& a) {
	a++;
}
void	decrement(int& b) {
	b--;
}

void	replX(char& c){
	c = 'X';
}

void	setNull(std::string& str) {
	str = "(null)";
}

int	main() {
	int	tab[] = {0 ,1, 2, 3, 4};
	char	tabC[] = {'a', 'b', 'c', 'd'};
	std::string arr[] = {"future", "is", "loading!"};

	std::cout << "increment tab..." << std::endl;
	iter(tab, 5, increment);
	iter(tab, 5, printElements<const int>);
	std::cout << "replace tabC with 'X'..." << std::endl;
	iter(tabC, 4, replX);
	iter(tabC, 4, printElements<const char>);
	std::cout << "setting null to arr..." << std::endl;
	iter(arr, 3, setNull);
	iter(arr, 3, printElements<const std::string>);
	return 0;
}