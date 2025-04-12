/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:39:23 by framador          #+#    #+#             */
/*   Updated: 2025/04/09 18:51:48 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &other);
	
		void	highFiveGuys();
};


#endif