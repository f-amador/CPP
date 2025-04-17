/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:38:04 by framador          #+#    #+#             */
/*   Updated: 2025/04/12 18:38:18 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(std::string name): _type(name)
{
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal	&other): _type(other._type)
{
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal	&other)
{
	if (this != &other) {
		_type = other._type;
	}
	std::cout << "Assignment operator called\n";
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound...\n";
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}