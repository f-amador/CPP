#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <exception>
template <typename T>
class Array
{

    T  *_value;
    int _size;
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        ~Array();
        const Array &operator=(const Array &other);

        class OutOfBoundsException : public std::exception {
    		public:
        		virtual const char* what() const throw();
    	};

        T &operator[](int n);
        int size() {return _size;};
};

#include "Array.tpp"

#endif