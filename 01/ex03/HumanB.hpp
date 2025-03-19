/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:51:36 by framador          #+#    #+#             */
/*   Updated: 2025/03/17 15:58:55 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *_weapon;
		std::string _name;
	public:
		HumanB(std::string str);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif
