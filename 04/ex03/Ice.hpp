/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:17:29 by framador          #+#    #+#             */
/*   Updated: 2025/06/02 18:30:28 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
	Ice();
	~Ice();
	Ice(const Ice &other);
	const Ice &operator=(const Ice &other);
	std::string const & getType() const;
	Ice *clone() const override;
	void use(ICharacter& target);
};

#endif