/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:38:19 by framador          #+#    #+#             */
/*   Updated: 2025/05/31 17:41:41 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	
	const Fixed _x;
	const Fixed _y;
	Point &operator=(const Point &other);

	public:
		Point();
		~Point();
		Point(const float x, const float y);
		Point(const Point &other);
		float getX(void) const;
		float getY(void) const;
		Point operator-(const Point &other) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif