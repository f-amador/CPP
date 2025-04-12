/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:40:39 by framador          #+#    #+#             */
/*   Updated: 2025/04/12 18:45:39 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog: public Animal
{
		std::string _type;
	public:
		Dog();
		Dog(std::string type);
		~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		
		void			makeSound() const;
		std::string		getType() const;
};

#endif