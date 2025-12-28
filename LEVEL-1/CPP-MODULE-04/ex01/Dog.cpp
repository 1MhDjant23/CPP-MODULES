#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	this->dBrain = new Brain();
	std::cout << "Dog starting ..." << std::endl;
}

Dog::~Dog() {
	delete this->dBrain;
	std::cout << this->type << " was died!" << std::endl;
}

Dog::Dog( const Dog& other ) : Animal( other ) {
	this->dBrain = NULL;
	std::cout << "[ Dog Copy Constructor Called ]" << std::endl;
	*this = other;
}

Dog&	Dog::operator=( const Dog& other ) {
	if ( this != &other ) {
		Animal::operator=( other );
		if ( this->dBrain )
			delete this->dBrain;
		this->dBrain = new Brain();
		for ( int i = 0; i < 100; i++ )
			this->dBrain->setIdeas( other.dBrain->getIdeas(i) );
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << " * Woof Woof * " << std::endl;
}

std::string	Dog::getBrain( unsigned int idx ) const {
	if ( idx >= 0 && idx < 100 )
		return this->dBrain->getIdeas(idx);
	std::cout << "you are out of dog brain!" << std::endl;
	return "(null)";
}

void	Dog::setBrain( std::string idea ) {
	this->dBrain->setIdeas( idea );
}
