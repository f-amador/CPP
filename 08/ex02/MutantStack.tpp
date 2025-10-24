#include "MutantStack.hpp"


template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other)
{
        static_cast<std::stack<T> >(this) = static_cast<std::stack<T> >(&other);
}

template <typename T>
const MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
    if (this != &other)
        static_cast<std::stack<T> >(this) = static_cast<std::stack<T> >(&other);
    return (other);
}

template <typename T>
MutantStack<T>::~MutantStack() {}

