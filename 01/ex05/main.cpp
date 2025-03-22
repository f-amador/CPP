/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 20:25:00 by framador          #+#    #+#             */
/*   Updated: 2025/03/22 20:32:08 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl test;
    std::cout << "DEBUG\n";
    test.complain("DEBUG");
    std::cout << "\n\nINFO\n";
    test.complain("INFO");
    std::cout << "\n\nWARNING\n";
    test.complain("WARNING");
    std::cout << "\n\nERROR\n";
    test.complain("ERROR");
    std::cout << "\n\nnope\n\n";
    test.complain("nope");
}