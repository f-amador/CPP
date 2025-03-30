/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:20:48 by framador          #+#    #+#             */
/*   Updated: 2025/03/29 16:43:58 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
    _point = 0;
    std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
    std::cout << "Default deconstructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called\n";
    *this = copy;
}

const int &Fixed::getRawBits()
{
    return (_point);    
}

Fixed::Fixed (const int point)
{
  std::cout << "Integer constructor called\n";  
  _point = point << _bits;
}

Fixed::Fixed (const float value)
{
  std::cout << "Float contructor called\n";
  _point = (roundf(value * (1 <<_bits))); 
} 

 Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
        _point = other._point;
    return *this;
}

void Fixed::setRawBits(int point)
{
    _point = point;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(_point) / (1 << _bits); 
}

int Fixed::toInt(void) const
{
    return _point >> _bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

bool    Fixed::operator<(const Fixed &other) const
{
    return (this->_point < other._point);
}

bool    Fixed::operator<=(const Fixed &other) const
{
    return (_point <= other._point);
}

bool    Fixed::operator>(const Fixed &other) const
{
    return (this->_point > other._point);
}

bool    Fixed::operator>=(const Fixed &other) const
{
    return (_point >= other._point);
}

bool    Fixed::operator!=(const Fixed &other) const
{
    return (_point != other._point);
}

bool    Fixed::operator==(const Fixed &other) const
{
    return (_point == other._point);
}

Fixed	Fixed::operator+(const Fixed &other)
{
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other)
{
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other)
{
    return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other)
{
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->_point++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_point--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	
	this->_point++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	
	this->_point--;
	return (tmp);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}	