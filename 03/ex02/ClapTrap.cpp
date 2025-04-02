/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:41:56 by framador          #+#    #+#             */
/*   Updated: 2025/04/01 18:10:55 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(100), _energyPoints(50), _damage(20)
{

	std::cout << "ClapTrap has been constructed\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap has been destroyed\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Claptrap copy constructor called\n";
    *this = copy;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
	{
        _name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_damage = other._damage;


	}
    return *this;
}
void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _damage << " points of damage!\n";
	}
}

void	ClapTrap::takeDamage(unsigned int points)
{
	if (_hitPoints > points)
		_hitPoints -= points;
	else _hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int points)
{
if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " repairs itself for " << points << " hit points!\n";
		_hitPoints += points;
	}
}

const std::string 	&ClapTrap::getName() const
{
	return (_name);
}

int	ClapTrap::getHitPoints() const
{
	return (_hitPoints);
}

int	ClapTrap::getEnergyPoints() const
{
	return (_energyPoints);
}

int	ClapTrap::getDamage() const
{
	return (_damage);
}