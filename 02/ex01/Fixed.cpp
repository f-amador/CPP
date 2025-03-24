/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:20:48 by framador          #+#    #+#             */
/*   Updated: 2025/03/24 19:20:45 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

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
    out << fixed.toFloat(); // Insert the floating-point representation into the stream
    return out;
}
