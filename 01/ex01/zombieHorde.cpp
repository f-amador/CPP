/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:10:57 by framador          #+#    #+#             */
/*   Updated: 2025/03/12 18:00:32 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



Zombie *zombieHorde(int N, std::string name)
{
	Zombie *Horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		Horde[i].setName(name);
		Horde[i].announce();
	}
	return Horde;
}

