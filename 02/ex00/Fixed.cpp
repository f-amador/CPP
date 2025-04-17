/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:20:48 by framador          #+#    #+#             */
/*   Updated: 2025/04/14 17:06:49 by framador         ###   ########.fr       */
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
    _point = copy._point;
}

int Fixed::getRawBits() const
{
    return (_point);    
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