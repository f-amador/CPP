/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:31:54 by framador          #+#    #+#             */
/*   Updated: 2025/06/06 14:16:04 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Materia.hpp"

class MateriaSource: public IMateriaSource
{
	std::string _type;
	Materia book[4];
	
	public:
		MateriaSource();
		MateriaSource(std::string type);
		void learnMateria(AMateria *);
		AMateria *createMateria(const std::string &type);	
};

#endif