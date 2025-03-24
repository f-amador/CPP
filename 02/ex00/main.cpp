/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:26:42 by framador          #+#    #+#             */
/*   Updated: 2025/03/24 18:51:51 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    std::cout << a.getRawBits() << std::endl;
    a.setRawBits(420);
    std::cout << "Changed a to 420" <<  std::endl;
    Fixed b( a );
    std::cout << b.getRawBits() << std::endl;
    std::cout << a.getRawBits() << std::endl;
    Fixed c;
    b.setRawBits(666);
    std::cout << "Changed b to 666" <<  std::endl;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}