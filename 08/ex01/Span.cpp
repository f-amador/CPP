#include "Span.hpp"

Span::Span(unsigned int N): _size(N) {}

Span::Span(const Span &other)
{
	_span = other._span;
	_size = other._size;
}

const Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_span = other._span;
		_size = other._size;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int N)
{
	if (_span.size() < _size)
		_span.push_back(N);
	else
		throw ArrayFullException();
}

long Span::shortestSpan()
{
	if (_span.size() <= 1)
		throw NoSpanFoundException();
	long res = std::numeric_limits<long>::max();
	for (unsigned int i = 0; i < _size - 1; i++)
	{
		for (unsigned int j = i + 1; j < _size; j++)
		{
			if (res > std::max(_span.at(i), _span.at(j)) - std::min(_span.at(i), _span.at(j)))
				res = std::max(_span.at(i), _span.at(j)) - std::min(_span.at(i), _span.at(j));
		}
	}
	return(res);	
}
long Span::longestSpan()
{
	if (_span.size() <= 1)
		throw NoSpanFoundException();
	long res = std::numeric_limits<long>::min();
	for (unsigned int i = 0; i < _size - 1; i++)
	{
		for (unsigned int j = i + 1; j < _size; j++)
		{
			if (res < std::max(_span.at(i), _span.at(j)) - std::min(_span.at(i), _span.at(j)))
				res = std::max(_span.at(i), _span.at(j)) - std::min(_span.at(i), _span.at(j));
		}
	}
	return(res);	
}
const std::vector<int> &Span::getSpan()
{
	return (_span);
}

unsigned int Span::getSize()
{
	return (_size);
}

const char *Span::ArrayFullException::what() const throw()
{
	return("The array is already full");
}

const char *Span::NoSpanFoundException::what() const throw()
{
	return("No span found the array contains insuficient values");
} 