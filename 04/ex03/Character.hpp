/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:17:12 by framador          #+#    #+#             */
/*   Updated: 2025/06/03 15:32:57 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Materia.hpp"

class Character: public ICharacter
{
	std::string _name;
	Materia _spells[4];

	public:
		Character();
		Character(std::string name);
		~Character();
		const std::string &getName() const override;
		const Materia &getSpell();
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target) override;
};

#endif