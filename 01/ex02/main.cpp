/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:06:19 by framador          #+#    #+#             */
/*   Updated: 2025/03/12 19:22:22 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = brain;

	stringPTR = &brain;
	std::cout << "address of brain:" << (long)&brain << std::endl;
	std::cout << "address of strPTR:" << (long)&stringPTR << std::endl;
	std::cout << "address of strREF:" << (long)&stringREF << std::endl;

	std::cout << "brain contains:" << brain << std::endl;
	std::cout << "strPTR points to:" << *stringPTR << std::endl;
	std::cout << "strREF points to:" << stringREF << std::endl;
}