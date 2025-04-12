/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:40:37 by framador          #+#    #+#             */
/*   Updated: 2025/04/12 18:45:27 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat: public Animal
{
		std::string _type;
	public:
		Cat();
		Cat(std::string type);
		~Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		
		void			makeSound() const;
		std::string		getType() const;
};

#endif