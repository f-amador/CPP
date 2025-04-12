/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:17:36 by framador          #+#    #+#             */
/*   Updated: 2025/04/09 18:56:59 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	
	ScavTrap b("Chosen Undead");
	b.beRepaired(10);
	std::cout << "Character: " << b.getName() << "\nHit Points: " << b.getHitPoints()
	<< "\nEnergy Points: " << b.getEnergyPoints() << "\nDamage: " << b.getDamage() << std::endl;
	
	std::cout << "Character: " << a.getName() << "\nHit Points: " << a.getHitPoints()
	<< "\nEnergy Points: " << a.getEnergyPoints() << "\nDamage: " << a.getDamage() << std::endl;
	
	FragTrap c("Ashen One");
	std::cout << "Character: " << c.getName() << "\nHit Points: " << c.getHitPoints()
	<< "\nEnergy Points: " << c.getEnergyPoints() << "\nDamage: " << c.getDamage() << std::endl;
	c.highFiveGuys();
}
