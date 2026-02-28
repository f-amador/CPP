/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:41:13 by framador          #+#    #+#             */
/*   Updated: 2026/02/21 16:25:22 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

using std::cout;

FragTrap::FragTrap(): ClapTrap()
{
	cout << "FragTrap Constructor Called\n";
}

FragTrap::FragTrap(string name): ClapTrap(name)
{
	cout << "FragTrap constructor has been called\n";
}

FragTrap::~FragTrap()
{
	cout << "FragTrap destructor has been called\n";
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{	
	cout << "FragTrap copy constructor called\n";
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
    _damage = copy._damage;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap copy assignment operator called\n";
    if (this != &other)
	{
        _name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_damage = other._damage;
	}
    return *this;
}
void	FragTrap::highFiveGuys()
{
	std::cout << "Who wants a High Five?\n";
}