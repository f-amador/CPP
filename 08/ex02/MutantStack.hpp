#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack
{
	std::stack<T> _stack;
	public:

	//	Orthodox Cannonical Form
		MutantStack();
		MutantStack(const MutantStack &other);
		const MutantStack &operator=(const MutantStack &other);
		~MutantStack();

	// Member Functions
		void push(T N);
		T top(void);
		void pop(void);
		size_t size(void);

		MutantStack<T>::iter
};

#include "MutantStack.tpp"

#endif