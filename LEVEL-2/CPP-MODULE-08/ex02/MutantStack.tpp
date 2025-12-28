#include "MutantStack.hpp"

template <class T>
MutantStack<T>::MutantStack() : std::stack<T>() { return ; }

template <class T>
MutantStack<T>::~MutantStack(){ return ; }

template <class T>
MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>(other) { return ; }

template <class T>
const MutantStack<T>&  MutantStack<T>::operator=(const MutantStack& other) {
    if (this != &other)
        std::stack<T>::operator=(other);
    return *this;    
}


template <class T>
typename MutantStack<T>::iterator    MutantStack<T>::begin()  {
    return this->c.begin();
}

template <class T>
typename MutantStack<T>::iterator    MutantStack<T>::end()  {
    return this->c.end();
}