#include "Span.hpp"

Span::Span( unsigned int N ) : capacity(N) { return ; }

Span::~Span() { return ; }

Span::Span( const Span& other ) {
	this->span = other.span;
}

Span&	Span::operator=( const Span& other ) {
	if (this != &other) {
		this->capacity = other.getCapacity();
		this->span = other.getVect();
	}
	return *this;
}

void	Span::addNumber(int n) {
	if (this->span.size() < this->capacity)
		this->span.push_back(n);
	else
		throw spanException();
}

int	Span::shortestSpan() const {
	if (this->span.empty() || this->span.size() < 2)
		throw spanException();
	std::vector<int>	sortedVect = this->span;
	std::sort(sortedVect.begin(), sortedVect.end());
	int	shortSpan = INT_MAX;
	for (size_t i = 0; i < sortedVect.size() - 1; i++) {
		if (sortedVect[i + 1] - sortedVect[i] < shortSpan)
			shortSpan = sortedVect[i + 1] - sortedVect[i];
	}
	return shortSpan;
}

int	Span::longestSpan() const {
	if (this->span.empty() || this->span.size() < 2)
		throw spanException();
	std::vector<int>	sortVect = this->span;
	std::sort(sortVect.begin(), sortVect.end());
	int	longSpan = sortVect[this->span.size() - 1] - sortVect[0];
	return longSpan;
}

void	Span::addMoreNumber(const std::vector<int>::iterator& start, const std::vector<int>::iterator& final) {
	if (start == final) {
		std::cerr << "Passed empty vector!" << std::endl;
		return ;
	}
	std::vector<int>::iterator	it = start;
	while (it != final && span.size() < capacity)
	{
		this->span.push_back(*it);
		it++;
	}
}

/*--------------# Additionall Method #--------------*/

const std::vector<int>&	Span::getVect() const {
	return this->span;
}

unsigned int	Span::getCapacity() const {
	return this->capacity;
}

void	Span::diplay() const {
	for (size_t i = 0; i < span.size(); i++)
	{
		std::cout << i << ": " << span[i] << std::endl;
	}
}

/*--------------# spanException implementation #--------------*/

const char*	spanException::what() const throw() {
	return "SpanExceptionDetected";
}
