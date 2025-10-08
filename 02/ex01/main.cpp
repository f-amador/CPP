/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:26:42 by framador          #+#    #+#             */
/*   Updated: 2025/04/14 17:39:47 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <limits.h>
int main( void )
{
    Fixed a;
    Fixed const b(INT_MIN + 1);
    Fixed const c(8388609);
    Fixed const d( b );
    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "a is " << a.toFloat() << " as Floateger" << std::endl;
    std::cout << "b is " << b.toFloat() << " as Floateger" << std::endl;
    std::cout << "c is " << c.toFloat() << " as Floateger" << std::endl;
    std::cout << "d is " << d.toFloat() << " as Floateger" << std::endl;
return 0;
}