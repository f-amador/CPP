#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

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

		iterator begin() { return this->c.begin();}
		iterator end() { return this->c.end();}
};

#include "MutantStack.tpp"

#endif