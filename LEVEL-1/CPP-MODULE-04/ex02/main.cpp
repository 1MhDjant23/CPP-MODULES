#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "=================== for Abstract Class !? ================" << std::endl;
	{
		Animal	meta;
	}
	std::cout << "=================== ++!? ================" << std::endl;
	{
		Dog	ct;
		Dog	ss;

		ss.makeSound();
		ss.setBrain("eats");
		ss.setBrain("sleep");
		ss.setBrain("attack le");

		std::cout << ss.getBrain(2) << std::endl;

		ct = ss;
		Dog	dd(ss);
		std::cout << "--> " << dd.getBrain(0) << std::endl;
		std::cout << "--> " << dd.getBrain(1) << std::endl;
	}
	std::cout << "=================== more !? ================" << std::endl;
	Animal*	anm[4];
	int	count = 4;
	for (int i = 0; i < count; i++) {
		if ( i < count / 2 )
			anm[i] = new Dog();
		else
			anm[i] = new Cat();
	}
	for (int i = 0; i < count; i++)
	{
		if ( i < count / 2 )
			anm[i]->setBrain("DOOOOOG");
		else
			anm[i]->setBrain("CAAAAAATS");
	}
	for (int i = 0; i < count; i++)
	{
		if ( i < count / 2 )
			std::cout << "dog brain is: " << anm[i]->getBrain(i) << std::endl;
		else
			std::cout << "cat brain is: " << anm[i]->getBrain(i - 2) << std::endl;
	}
	for (int i = 0; i < count; i++)
		delete	anm[i];
	return 0;
}
