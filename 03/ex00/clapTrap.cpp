/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:41:56 by framador          #+#    #+#             */
/*   Updated: 2025/03/30 18:57:23 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.hpp"

clapTrap::clapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_damage = 0;
	std::cout << "ClapTrap has been constructed\n";
}

clapTrap::~clapTrap()
{
	std::cout << "ClapTrap has been destroyed\n";
}

clapTrap::clapTrap(const clapTrap &copy)
{
    std::cout << "Claptrap copy constructor called\n";
    *this = copy;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
}

void	clapTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _damage << " points of damage!\n";
	}
}

void	clapTrap::takeDamage(unsigned int points)
{
	if (_hitPoints > points)
		_hitPoints -= points;
	else _hitPoints = 0;
}

void	clapTrap::beRepaired(unsigned int points)
{
if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " repairs itself for " << points << " hit points!\n";
		_hitPoints += points;
	}
}

const std::string 	&clapTrap::getName() const
{
	return (_name);
}

int	clapTrap::getHitPoints() const
{
	return (_hitPoints);
}

int	clapTrap::getEnergyPoints() const
{
	return (_energyPoints);
}

int	clapTrap::getDamage() const
{
	return (_damage);
}
