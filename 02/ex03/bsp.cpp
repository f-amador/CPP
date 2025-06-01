/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:08:42 by framador          #+#    #+#             */
/*   Updated: 2025/06/01 12:05:43 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float crossProduct(const Point a, const Point b) {
    return (a.getX() * b.getY()) - (a.getY() * b.getX());
}


bool bsp(const Point p, const Point a, const Point b, const Point c) {
    // Vector setup
    Point v0 = b - a;
    Point v1 = c - a;
    Point v2 = p - a;
    float epsilon = -1e-5f;

    // Degenerate triangle check
    float cross = crossProduct(v0, v1);
    if (std::abs(cross) < 1e-5f) return false;

    // Barycentric coordinates
    float invDenom = 1.0f / cross;
    float u = crossProduct(v2, v1) * invDenom;
    float v = crossProduct(v0, v2) * invDenom;

    // Edge tolerance
    return (u >= epsilon) && (v >= epsilon) && (u + v <= 1.0f - epsilon);
}