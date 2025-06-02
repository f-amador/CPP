/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:15:55 by framador          #+#    #+#             */
/*   Updated: 2025/06/02 19:12:25 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice Default Constructor Called\n";
}

Ice::~Ice()
{
	std::cout << "Ice Destructor Called\n";
}

Ice::Ice(const Ice &other)
{
	_type = other._type;
}

const	Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
		_type = other._type;
}

const std::string &Ice::getType() const
{
	return(_type);
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}