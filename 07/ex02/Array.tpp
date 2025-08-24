#include "Array.hpp"


template <typename T>
Array<T>::Array()
{
    _value = NULL;
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    _value = new T[n];
    _size = n;
}

template <typename T>
Array<T>::Array(const Array &other)
{
    _value = new T[other._size];
    _size = other._size;
    for(int i = 0; i < _size; i++)
        _value[i] = other._value[i];
}

template <typename T>
Array<T>::~Array()
{
    delete[] _value;
}

template <typename T>
const Array<T> &Array<T>::operator=(const Array<T> &other) 
{
    if (this != &other)
    {
        delete[] _value;
        _value = new T[other._size];
        _size = other._size;
        for(int i = 0; i < _size; i++)
            _value[i] = other._value[i];
    }
    return(*this);
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Index out of bounds!\n");
}

template <typename T>
T  &Array<T>::operator[](int n)
{
    if (n < 0 || n >= _size || !_value)
        throw(OutOfBoundsException());
    // std::cout << _value[n] << "\n";
    return (_value[n]);
} 
