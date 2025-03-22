/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:27:08 by framador          #+#    #+#             */
/*   Updated: 2025/03/19 14:51:30 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
		std::string _name;

	public:
		Zombie(std::string name);
		~Zombie();
		void announce();
};

	Zombie *newZombie(std::string name);
	void randomChump(std::string name);



#endif