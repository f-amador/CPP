/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 16:20:31 by framador          #+#    #+#             */
/*   Updated: 2026/02/21 16:26:34 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


using std::string;


DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Constructor Called\n";	
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), _name(name)
{

	
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap Constructor Called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor Called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	_name = other._name;
	_damage = other._damage;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_damage = other._damage;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
	}
	return(*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << " Hello my name is " << _name << " and " << this->ClapTrap::_name << " is the one I inherit from\n";
}