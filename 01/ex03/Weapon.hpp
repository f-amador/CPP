/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:39:13 by framador          #+#    #+#             */
/*   Updated: 2025/03/19 14:50:18 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{

		std::string _type;
	public:
		Weapon(std::string str);
		~Weapon();
	
	const std::string	&getType();
	void	setType(std::string type);
};

#endif
