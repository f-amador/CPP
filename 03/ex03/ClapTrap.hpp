/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 21:20:12 by framador          #+#    #+#             */
/*   Updated: 2025/04/15 15:10:14 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string				_name;
		unsigned int			_hitPoints;
		unsigned int			_energyPoints;
		unsigned int			_damage;

	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &other);
	
		void attack(const std::string &target);	
		void takeDamage(unsigned int points);
		void beRepaired(unsigned int points);
		
		const std::string 	&getName();
		int					getHitPoints() const;
		int					getEnergyPoints() const;
		int					getDamage() const;
};



#endif