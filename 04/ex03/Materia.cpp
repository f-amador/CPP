/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:46:20 by framador          #+#    #+#             */
/*   Updated: 2025/06/06 16:59:09 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

Materia::Materia()
{
	std::cout << "Materia Default Constructor called\n";
}

Materia::~Materia()
{
	std::cout << "Materia Default Destructor called\n";
}

Materia::Materia(const Materia &other)
{
	_type = other._type;
}

const Materia &Materia::operator=(const Materia &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

