#include "easyfind.hpp"

int main() {
	std::vector<int>	v1(5, 0);

	std::list<int>	l;
	l.push_back(2);
	l.push_back(-1);
	l.push_back(10);
	l.push_back(3);
	l.push_back(0);


	v1.push_back(2);
	try
	{
		easyfind(v1, 2);
		easyfind(l, -11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}