#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
class Span
{
	// Private attribute variables
	std::vector<int> _span;
	unsigned int _size;

	public:
		
	// Orthodox Cannonical Form
		Span(unsigned int N);
		Span(const Span &other);
		const Span &operator=(const Span &other);
		~Span();
		
	// Member Functions 
		void addNumber(int N);
		long longestSpan();
		long shortestSpan();

	// Getters
		const std::vector<int> &getSpan();
		unsigned int getSize();

		void fillvector(void);
		
	// Exceptions
		class ArrayFullException : public std::exception {
    		public:
        		virtual const char* what() const throw();
    	};

		class NoSpanFoundException : public std::exception {
    		public:
        		virtual const char* what() const throw();
    	};
};

#endif