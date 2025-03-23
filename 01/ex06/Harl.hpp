/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:47:23 by framador          #+#    #+#             */
/*   Updated: 2025/03/22 20:27:42 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	void debug();
 	void info();
 	void warning();
 	void error();

	public:
		Harl();
		~Harl();
	
		void complain(std::string lvl);
};

#endif