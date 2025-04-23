/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:37:16 by framador          #+#    #+#             */
/*   Updated: 2025/04/15 15:59:30 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): _type("Dog")
{
	_brain = new Brain();
	std::cout << "Dog constructor called\n";
}

Dog::Dog(std::string name): _type(name)
{
	std::cout << "Dog constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete _brain;
}

Dog::Dog(const Dog	&other): _type(other._type)
{
	_brain  = new Brain(*other._brain);
	std::cout << "Dog copy constructor called\n";
}

Dog	&Dog::operator=(const Dog	&other)
{
	if (this != &other) {
		_type = other._type;
		delete _brain;
		_brain = new Brain(*other._brain);

	}
	std::cout << "Assignment operator called\n";
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof...\n";
}

std::string	Dog::getType() const
{
	return (_type);
}

Brain &Dog::getBrain() const 
{
	return *_brain; 
}