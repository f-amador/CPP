/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:16:06 by framador          #+#    #+#             */
/*   Updated: 2025/03/11 17:43:22 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Contact.hpp"
#include "Phonebook.hpp"

void	prompter(std::string prompt, Phonebook *book)
{
	if (prompt == "ADD")
		book->add_contact(book);
	else if (prompt == "SEARCH")
		book->search_contact(book);
	else if (prompt != "EXIT")
		std::cerr << "Invalid input!\n";
}	

int	main(void)
{
	std::string prompt;
	static Phonebook	book;
	
	while (1)
	{
		std::cout << "Welcome to Phonebook\n";
		std::cout << "Input one of the following: ADD SEARCH EXIT\n";

		std::cin >> prompt;
		if (std::cin.eof())
			return (1);
		prompter(prompt, &book);
		if (prompt == "EXIT")
			return (1);
	}
	return (0);
}