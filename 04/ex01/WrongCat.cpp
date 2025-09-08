/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:39:40 by framador          #+#    #+#             */
/*   Updated: 2025/04/12 18:41:36 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal(), _type("default")
{
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(std::string name): _type(name)
{
	std::cout << "WrongCat constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

WrongCat::WrongCat(const WrongCat	&other):WrongAnimal(), _type(other._type)
{
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat	&WrongCat::operator=(const WrongCat	&other)
{
	if (this != &other) {
		_type = other._type;
	}
	std::cout << "Assignment operator called\n";
	return (*this);
}
void	WrongCat::makeSound() const
{
	std::cout << "WrongMeow...\n";
}