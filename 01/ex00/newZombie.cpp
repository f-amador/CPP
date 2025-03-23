/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:58:37 by framador          #+#    #+#             */
/*   Updated: 2025/03/23 18:59:03 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie	*newZombie(std::string name)
{
	Zombie *tmp = new Zombie(name);
	
	tmp->announce();
	return tmp;
}