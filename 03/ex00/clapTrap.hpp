/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 21:20:12 by framador          #+#    #+#             */
/*   Updated: 2025/03/30 18:53:02 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class clapTrap
{
	std::string				_name;
	unsigned int			_hitPoints;
	unsigned int			_energyPoints;
	unsigned int			_damage;

	public:
		clapTrap(std::string name);
		~clapTrap();
		clapTrap(const clapTrap &copy);
	
		void attack(const std::string &target);	
		void takeDamage(unsigned int points);
		void beRepaired(unsigned int points);
		
		const std::string 	&getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getDamage() const;

};



#endif