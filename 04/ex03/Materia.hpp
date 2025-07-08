/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:34:09 by framador          #+#    #+#             */
/*   Updated: 2025/06/06 16:47:08 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "AMateria.hpp"
#include <iostream>

class Materia: public AMateria
{
	public:
		Materia();
		~Materia();
		Materia(const Materia &other);
		const Materia &operator=(const Materia &other);
		AMateria* clone() const;
		void use(ICharacter& target);

};

#endif