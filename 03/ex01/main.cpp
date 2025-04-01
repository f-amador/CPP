/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:17:36 by framador          #+#    #+#             */
/*   Updated: 2025/04/01 17:21:13 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("HumanA");
	//clapTrap b("HumanB");
	
	std::cout << "Character: " << a.getName() << "\nHit Points: " << a.getHitPoints()
	<< "\nEnergy Points: " << a.getEnergyPoints() << "\nDamage: " << a.getDamage() << std::endl; 
	
	// std::cout << "Character: " << b.getName() << "\nHit Points: " << b.getHitPoints()
	// << "\nEnergy Points: " << b.getEnergyPoints() << "\nDamage: " << b.getDamage() << std::endl;
	
	a.attack("Andrade");
	a.guardGate();
	std::cout << "Character: " << a.getName() << "\nHit Points: " << a.getHitPoints()
	<< "\nEnergy Points: " << a.getEnergyPoints() << "\nDamage: " << a.getDamage() << std::endl;
	
	ScavTrap b = a;
	b.beRepaired(10);
	std::cout << "Character: " << b.getName() << "\nHit Points: " << b.getHitPoints()
	<< "\nEnergy Points: " << b.getEnergyPoints() << "\nDamage: " << b.getDamage() << std::endl;
	;
}
