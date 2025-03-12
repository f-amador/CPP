/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:57:40 by framador          #+#    #+#             */
/*   Updated: 2025/03/12 18:03:22 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "Zombie has been created\n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie has been destroyed\n";
}

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
Zombie::Zombie()
{
	std::cout << "Zombie has been created\n";
}

void Zombie::setName(std::string name)
{
	_name = name;
}