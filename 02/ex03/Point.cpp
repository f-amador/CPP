/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:42:46 by framador          #+#    #+#             */
/*   Updated: 2025/05/31 17:43:28 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
	//std::cout << "Point default Constructor Called\n";
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
	//std::cout << "Point const Constructor Called\n";
}

Point::Point(const Point &other):_x(other._x), _y(other._y)
{
	//std::cout << "Point Copy Constructor Called\n";	
}

Point::~Point()
{
	//std::cout << "Point Destructor Called\n";
}
float Point::getX(void) const
{
	return (_x.toFloat());
}

float Point::getY(void) const
{
	return (_x.toFloat());
}

Point Point::operator-(const Point &other) const
{
		return (Point( this->getX() - other.getX(), this->getY() - other.getY() ));
}