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
#include <iostream>
int main( void ) 
{
	Fixed a(19);
	Fixed b( Fixed( 5.05f )   * Fixed(2) );
	std::cout << std::boolalpha;
	std::cout << "Fixed: b(5.05f * 2), b(19)" << std::endl;
	std::cout << "b < a: " << (b < a) << std::endl;
	std::cout << "add: " << (b + a) << std::endl;
	std::cout << "subtract: " << (b - a) << std::endl;
	std::cout << "multiply: " << (b * a) << std::endl;
	std::cout << "division: " << (b / a) << std::endl;
	std::cout << "incrementing a: ";
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a-- << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "max: " << Fixed::max( a, b ) << std::endl;
	std::cout << "min: " << Fixed::min( a, b ) << std::endl;
	return 0;
}