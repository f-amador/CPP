/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:44:41 by framador          #+#    #+#             */
/*   Updated: 2025/06/02 19:11:42 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("Cure")
{
	std::cout << "Cure Default Constructor Called\n";
}

Cure::~Cure()
{
	std::cout << "Cure Destructor Called\n";
}

Cure::Cure(const Cure &other)
{
	_type = other._type;
}

const	Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
		_type = other._type;
}

const std::string &Cure::getType() const
{
	return(_type);
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "heals " << target.getName() << "'s wounds\n";  
}