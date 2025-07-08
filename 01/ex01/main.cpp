/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:48:34 by framador          #+#    #+#             */
/*   Updated: 2025/03/12 17:53:45 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


Zombie	*newZombie(std::string name)
{
	Zombie *tmp = new Zombie(name);
	
	tmp->announce();
	return tmp;
}

void	randomChump(std::string name)
{
	Zombie tmp(name);
	
	tmp.announce();
}

int	main(void)
{
	//Zombie *test = newZombie("New");
	std::string name;
	int	N;
	
	//test->announce();
	//randomChump("Chump");
	//delete test;

	std::cout << "Input a name to create a zombie horde:";
	std::cin >> name;
	std::cout << "How many zombies do you want to create?";
	std::cin >> N;
	Zombie *horde = zombieHorde(N, name);

	delete[] horde;
}