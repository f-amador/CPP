/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:40:37 by framador          #+#    #+#             */
/*   Updated: 2025/04/15 15:58:56 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat: public Animal
{
		Brain *_brain;
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