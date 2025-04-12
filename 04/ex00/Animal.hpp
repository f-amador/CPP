/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:20:13 by framador          #+#    #+#             */
/*   Updated: 2025/04/12 18:45:32 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);

		virtual void			makeSound() const;
		virtual std::string		getType() const;
};

#endif