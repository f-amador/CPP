/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:48:07 by framador          #+#    #+#             */
/*   Updated: 2025/03/23 17:16:55 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "DEBUG\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}
void Harl::info()
{
	 std::cout << "\n\nINFO\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning()
{
	std::cout << "\n\nWARNING\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl::error()
{
	 std::cout << "\n\nERROR\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string lvl)
{
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int i = 0;
    for (; i < 4; i++) 
	{
        if (levels[i] == lvl)
            break;
    }
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return ;
	}
	switch (i)
	{
	case 0:
		this->debug();
	case 1:
		this->info();
	case 2:
		this->warning();
	case 3:
		this->error();
	break;
	}
}
