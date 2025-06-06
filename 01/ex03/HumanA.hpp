/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:50:44 by framador          #+#    #+#             */
/*   Updated: 2025/03/19 14:50:30 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
		Weapon &_weapon;
		std::string _name;
	public:
		HumanA(std::string str, Weapon &weapon);
		~HumanA();
		void attack();
};

#endif
