#include "Array.hpp"

/*-----------# Default constructor #----------*/
template <class T>
Array<T>::Array() : element(NULL) ,sizeOfArray(0) { }

/*-----------# Parametrized constructor #----------*/
template <class T>
Array<T>::Array( unsigned int n ) : element(new T[n]), sizeOfArray(n) { }

/*-----------# Copy constructor #----------*/
template <class T>
Array<T>::Array( const Array& other ) : element(new T[other.size()]), sizeOfArray(other.size()) {
	for (size_t i = 0; i < other.size(); i++)
		this->element[i] = other.element[i];
}

/*-----------# Operator Assignement #----------*/
template <class T>
Array<T>&	Array<T>::operator=( const Array& other ) {
	if (this->element) {
		delete[] element; element = NULL;
	}
	this->element = new T[other.size()];

	for (size_t i = 0; i < other.size(); i++)
		this->element[i] = other.element[i];
}

/*-----------# Subscript Operator [ for non-const ] #----------*/
template <class T>
T&	Array<T>::operator[]( unsigned int index ) {
	if (!element || index >= sizeOfArray)
		throw std::out_of_range("Index: Out Of range");
	return this->element[index];
}

/*-----------# Subscript Operator [ for const ] #----------*/
template <class T>
const T&	Array<T>::operator[]( unsigned int index ) const {
	if (!element || index >= sizeOfArray)
		throw std::out_of_range("Index: Out Of range");
	return this->element[index];
}

/*-----------# ~Destructor~ #----------*/
template <class T>
Array<T>::~Array() {
	if (this->element) {
		delete[] element; element = NULL;
	}
}

template <class T>
size_t	Array<T>::size() const {
	return this->sizeOfArray;
}
