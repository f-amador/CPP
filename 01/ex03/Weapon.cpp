/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:39:27 by framador          #+#    #+#             */
/*   Updated: 2025/03/12 20:00:55 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string str)
{
	_type = str;
	std::cout << "Weapon has been created\n";
}

Weapon::~Weapon()
{
	std::cout << "Weapond has been destroyed\n";
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType()
{
	return _type;
}