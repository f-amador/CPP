/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:26:42 by framador          #+#    #+#             */
/*   Updated: 2025/04/12 19:37:14 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b(Fixed(5.05f) + Fixed(2));
    Fixed const c(Fixed(5.05f) - Fixed(2) );
    Fixed d(Fixed(5.05f) * Fixed(2));
    Fixed e(Fixed(5.05f) / Fixed(2));
    Fixed f(d + e);
    Fixed g(f * f / d + e - d);

    std::cout << "\nArithmetic operators:\n\n";
    std::cout << "b: " << b << "    " << "c: " << c << std::endl;
    std::cout << "d: " << d << "    " << "e: " << e << std::endl;
    std::cout << "f: " << f << "    " << "g: " << g << "\n\n";

    std::cout << "Comparison operators:\n\n";
    std::cout << "b > c    =   " << (b > c) << std::endl;
    std::cout << "b >= c   =   " << (b >= c) << std::endl;
    std::cout << "b >= b   =   " << (b >= b) << std::endl;
    std::cout << "b < c    =   " << (b < c) << std::endl;
    std::cout << "b <= c   =   " << (b <= c) << std::endl;
    std::cout << "b <= b   =   " << (b <= b) << std::endl;
    std::cout << "b == b   =   " << (b == b) << std::endl;
    std::cout << "b != c   =   " << (b != c) << std::endl;
    std::cout << "f != g   =   " << (f != g) << "\n\n";

    std::cout << "Increment and decrement operators:\n\n";
    std::cout << "a     =    " << a << std::endl;
    std::cout << "++a   =    " << ++a << std::endl;
    std::cout << "a     =    " << a << std::endl;
    std::cout << "a++   =    " << a++ << std::endl;
    std::cout << "a     =    " << a << std::endl;
    std::cout << "a--   =    " << a-- << std::endl;
    std::cout << "a     =    " << a << std::endl;
    std::cout << "--a   =    " << --a << "\n\n";
    
    std::cout << "Min and max functions:\n\n";
    std::cout << "Not const\n";
    std::cout << "Args passed in min function: a, d:  " << Fixed::min(a, d) << std::endl;
    std::cout << "Args passed in max function: e, f:  " << Fixed::max(e, f) << "\n\n";
    std::cout << "Const\n";
    std::cout << "Args passed in min function: b, c:  " << Fixed::min(b, c) << std::endl;
    std::cout << "Args passed in max function: b, c:  " << Fixed::max(b, c) << "\n\n";

    return (0);
}
