/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:26:42 by framador          #+#    #+#             */
/*   Updated: 2025/05/31 17:45:44 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>


int main( void ) 
{
	Point a(1,0);
	Point b(1,1);
	Point c(0,0);
	Point test(-1,0);

	if (bsp(test, a, b, c))
		std::cout << "Inside\n";
	else
		std::cout << "Outside\n";
	
}