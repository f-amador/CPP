/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:26:42 by framador          #+#    #+#             */
/*   Updated: 2025/06/01 12:22:51 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>



void test_point(const Point& p, const Point& a, const Point& b, const Point& c, const std::string& desc) {
    std::cout << "Testing " << desc << " at (" << p.getX() << ", " << p.getY() << "): ";
    std::cout << (bsp(p, a, b, c) ? "\033[32mINSIDE\033[0m" : "\033[31mOUTSIDE\033[0m") << std::endl;
}

int main() {
    Point a(1.0f, 0.0f);
    Point b(1.0f, 1.0f);
    Point c(0.0f, 0.0f);

    std::cout << "\n\033[1;36m=== TRIANGLE VERTICES ===\033[0m\n";
    std::cout << "A: (" << a.getX() << ", " << a.getY() << ")\n";
    std::cout << "B: (" << b.getX() << ", " << b.getY() << ")\n";
    std::cout << "C: (" << c.getX() << ", " << c.getY() << ")\n\n";

    test_point(Point(0.5f, 0.25f), a, b, c, "Center point");
    test_point(Point(0.75f, 0.25f), a, b, c, "Near edge AB");

    test_point(Point(0.5f, 0.0f), a, b, c, "On edge AC");
    test_point(Point(1.0f, 0.5f), a, b, c, "On edge AB");

    test_point(Point(-1.0f, 0.0f), a, b, c, "Left of AC");
    test_point(Point(1.0f, 2.0f), a, b, c, "Above AB");
    test_point(Point(0.5f, -0.5f), a, b, c, "Below AC");

    test_point(a, a, b, c, "Vertex A");
    test_point(b, a, b, c, "Vertex B");
    test_point(c, a, b, c, "Vertex C");

    Point col1(0.0f, 0.0f);
    Point col2(1.0f, 1.0f);
    Point col3(2.0f, 2.0f);
    std::cout << "\n\033[1;33m=== DEGENERATE TRIANGLE TEST ===\033[0m\n";
    test_point(Point(1.5f, 1.5f), col1, col2, col3, "On collinear edge");

    return 0;
}