/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:43:07 by framador          #+#    #+#             */
/*   Updated: 2025/06/06 11:19:40 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called\n";
}
MateriaSource::MateriaSource(std::string type)
{
	
	learnMateria(createMateria(type));
}

void	MateriaSource::learnMateria(AMateria *)
{
	
}