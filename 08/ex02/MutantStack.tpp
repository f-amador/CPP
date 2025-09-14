#include "MutantStack.hpp"


template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other)
{
	_stack = other._stack;
}

template <typename T>
const MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
	if (this != &other)
		_stack = other._stack;
	return(*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
void MutantStack<T>::push(T N)
{
	_stack.push(N);
}

template <typename T>
T MutantStack<T>::top()
{
	return (_stack.top());
}

template <typename T>
void MutantStack<T>::pop()
{
	_stack.pop();
}

template <typename T>
size_t MutantStack<T>::size(void)
{
	return (_stack.size());
}

