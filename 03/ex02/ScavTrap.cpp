/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:19:00 by framador          #+#    #+#             */
/*   Updated: 2025/04/01 17:35:11 by framador         ###   ########.fr       */
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

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called\n";
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap copy assignment operator called\n";
    if (this != &other)
	{
        _name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_damage = other._damage;
	}
    return *this;
}

void	ScavTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks " << target << " , causing " << _damage << " points of damage!\n";
    }
}

void	ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << _name << " is now guarding the gate!\n";
}