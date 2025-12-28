#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <iostream>
#include <stack>
#include <deque>
#include <list>

template <class T>
class   MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator    iterator;
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack& other);
        const MutantStack&  operator=(const MutantStack& other);
        iterator  begin() ;
        iterator end() ;
};

#include "MutantStack.tpp"

#endif