/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:51:57 by framador          #+#    #+#             */
/*   Updated: 2025/03/12 19:56:55 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(/* args */)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}