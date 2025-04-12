/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:21:18 by framador          #+#    #+#             */
/*   Updated: 2025/04/11 17:13:49 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal constructor called\n";
}

Animal::Animal(std::string name): _type(name)
{
	std::cout << "Animal constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

Animal::Animal(const Animal	&other): _type(other._type)
{
	std::cout << "Animal copy constructor called\n";
}

Animal	&Animal::operator=(const Animal	&other)
{
	if (this != &other) {
		_type = other._type;
	}
	std::cout << "Assignment operator called\n";
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound...\n";
}

std::string	Animal::getType() const
{
	return (_type);
}