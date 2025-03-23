/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 20:25:00 by framador          #+#    #+#             */
/*   Updated: 2025/03/23 17:15:07 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl test;
    std::string s;
    if (ac != 2)
    {
        std::cout << "Invalid input.\nTry using: ./harlFilter LEVEL\n";
        return (1);
    }
    test.complain(av[1]);
    return (0);
}