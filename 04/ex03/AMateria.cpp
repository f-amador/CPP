/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:51:44 by framador          #+#    #+#             */
/*   Updated: 2025/06/02 18:14:55 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type(NULL)
{
	std::cout << "AMateria Default Constructor Called\n";
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor Called\n";
}

AMateria::AMateria(const std::string &type)
{
	_type = type;
}

const std::string &AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Used " << _type << " on " << target.getName();
}
