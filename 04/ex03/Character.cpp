/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:17:11 by framador          #+#    #+#             */
/*   Updated: 2025/06/04 11:50:22 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name(NULL)
{}

Character::Character(std::string name): _name(name)
{}
Character::~Character()
{}

const std::string  &Character::getName()
{
	return (_name);
}

void Character::equip(AMateria *m)
{
// 	for(int i = 0; i < 4, i++;)
// 	{
// 		if ()
// 	}
}

void	Character::unequip(int idx)
{
	;
}

void	Character::use(int idx, ICharacter &target)
{
	;
}