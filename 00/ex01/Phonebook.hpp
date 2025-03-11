/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:54:28 by framador          #+#    #+#             */
/*   Updated: 2025/03/11 17:49:25 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"


class Phonebook
{
	Contact	contact[8];

	public:
	Phonebook();
	~Phonebook();
	
	void 	setContact(Contact &contact, int i);
	Contact getContact(int i);
	
	void 	search_contact(Phonebook *book);
	void	add_contact(Phonebook *book);
	void	print_list(Phonebook *book);

};


#endif