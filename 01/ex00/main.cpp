/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:48:34 by framador          #+#    #+#             */
/*   Updated: 2025/05/29 18:11:19 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *test = newZombie("New");
	std::string name;
	std::string cout;
	test->announce();
	randomChump("Chump");
	std::cout << "Input a name to create a zombie:";
	std::cin >> name;
	delete test;
	test = newZombie(name);
	delete test;
}