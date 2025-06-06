/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:17:36 by framador          #+#    #+#             */
/*   Updated: 2025/06/06 10:54:05 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("HumanA");
	ClapTrap b("HumanB");
	
	std::cout << "Character: " << a.getName() << "\nHit Points: " << a.getHitPoints()
	<< "\nEnergy Points: " << a.getEnergyPoints() << "\nDamage: " << a.getDamage() << std::endl; 
	
	std::cout << "Character: " << b.getName() << "\nHit Points: " << b.getHitPoints()
	<< "\nEnergy Points: " << b.getEnergyPoints() << "\nDamage: " << b.getDamage() << std::endl;
	
	a.attack("Andrade");
	b.beRepaired(10);
	std::cout << "Character: " << b.getName() << "\nHit Points: " << b.getHitPoints()
	<< "\nEnergy Points: " << b.getEnergyPoints() << "\nDamage: " << b.getDamage() << std::endl;
}
