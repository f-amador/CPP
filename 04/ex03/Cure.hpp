/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:45:21 by framador          #+#    #+#             */
/*   Updated: 2025/06/02 18:48:22 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
	Cure();
	~Cure();
	Cure(const Cure &other);
	const Cure &operator=(const Cure &other);
	std::string const &getType() const;
	Cure *clone() const override;
	void use(ICharacter& target);
};

#endif