/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:19:00 by framador          #+#    #+#             */
/*   Updated: 2025/04/01 17:14:40 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap has been constructed\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap has been destroyed\n";
}

void	ScavTrap::attack(const std::string& target)
{
    if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
    {
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << " , causing " << this->getDamage() << " points of damage!\n";
    }
}

void	ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << this->getName() << " is now guarding the gate!\n";
}