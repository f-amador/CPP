/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:38:33 by framador          #+#    #+#             */
/*   Updated: 2025/04/15 15:59:53 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): _type("Cat")
{
	_brain = new Brain();
	std::cout << "Cat constructor called\n";
}

Cat::Cat(std::string name): _type(name)
{
	std::cout << "Cat constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat	&other): _type(other._type)
{
	std::cout << "Cat copy constructor called\n";
}

Cat	&Cat::operator=(const Cat	&other)
{
	if (this != &other) {
		_type = other._type;
	}
	std::cout << "Assignment operator called\n";
	return (*this);
}
void	Cat::makeSound() const
{
	std::cout << "Meow...\n";
}

std::string	Cat::getType() const
{
	return (_type);
}