/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:41:13 by framador          #+#    #+#             */
/*   Updated: 2025/04/09 18:57:37 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor has been called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor has been called\n";
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called\n";
	*this = copy;
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