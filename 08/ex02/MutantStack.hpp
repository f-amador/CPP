#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{

	
	public:

	//	Orthodox Cannonical Form
		MutantStack();
		MutantStack(const MutantStack &other);
		const MutantStack &operator=(const MutantStack &other);
		~MutantStack();

	// Member Functions


		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		iterator begin() { return this->c.begin();}
		iterator end() { return this->c.end();}
		iterator rbegin() { return this->c.rbegin();}
		iterator rend() { return this->c.rend();}


};

#include "MutantStack.tpp"

#endif