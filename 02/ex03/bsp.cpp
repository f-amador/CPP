/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:08:42 by framador          #+#    #+#             */
/*   Updated: 2025/05/31 17:40:17 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float crossProduct(const Point a, const Point b) {
    return (a.getX() * b.getY()) - (a.getY() * b.getX());
}

static float triangleArea(const Point a, const Point b, const Point c) {
    return std::abs(crossProduct(b - a, c - a)) / 2.0f;
}

bool bsp(const Point p, const Point a, const Point b, const Point c) {
    float areaABC = triangleArea(a, b, c);
    float areaPAB = triangleArea(p, a, b);
    float areaPBC = triangleArea(p, b, c);
    float areaPCA = triangleArea(p, c, a);

    float epsilon = 1e-5;
    return std::abs(areaABC - (areaPAB + areaPBC + areaPCA)) < epsilon;
}
