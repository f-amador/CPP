/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:10:24 by framador          #+#    #+#             */
/*   Updated: 2025/04/09 16:09:35 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <string>
#include <iomanip>
#include <cstdlib>

Phonebook::Phonebook(void)
{
	//std::cout << "Phonebook has been created" << std::endl;
	return;
}

Phonebook::~Phonebook(void)
{
	//std::cout << "Phonebook has been destroyed" << std::endl;
	return;
}

void Phonebook::setContact(Contact &contact, int i)
{
	this->contact[i] = contact;
}

Contact Phonebook::getContact(int i)
{
	return this->contact[i];
}
void	Phonebook::add_contact(Phonebook *book)
{
	static int i = 0;
	Contact add;
	std::string tmp;

	std::cout << "What is the first name?\n";
	std::cin >> tmp;
	if (std::cin.eof())
		exit(1);
	add.setFirstName(tmp);
	std::cout << "What is the last name?\n";
	std::cin >> tmp;
	if (std::cin.eof())
		exit(1);
	add.setLastName(tmp);
	std::cout << "What is the nickname?\n";
	std::cin >> tmp;
	if (std::cin.eof())
		exit(1);
	add.setNickname(tmp);
	std::cout << "What is the phone number?\n";
	std::cin >> tmp;
	if (std::cin.eof())
		exit(1);
	if (atoi(tmp.c_str()) < 1)
	{
		std::cerr << "INVALID NUMBER\n";
		return ;
	}
	add.setNumber(atoi(tmp.c_str()));
	std::cout << "What is your darkest secret?\n";
	std::cin >> tmp;
	if (std::cin.eof())
		exit(1);
	add.setSecret(tmp);
	book->setContact(add, i);
	i++;
	if (i == 8)
		i = 0;
}

void Phonebook::search_contact(Phonebook *book)
{	
	std::string tmp;
	int i;

	std::cout << std::setw(10) << std::right << "Index"
	<< "|" << std::setw(10) << std::right << "FIRST NAME"
	<< "|" << std::setw(10) << std::right << "LAST NAME"
	<< "|" << std::setw(10) << std::right << "NICKNAME" << "|\n";
	for (int i = 0; i < 8; i++)
	{
		if (!book->contact[i].getFirstName().empty())
		{
			std::cout << std::setw(10) << std::right << i + 1
			<< "|" << std::setw(10) << std::right << book->contact[i].getFirstName()
			<< "|" << std::setw(10) << std::right << book->contact[i].getLastName()
			<< "|" << std::setw(10) << std::right << book->contact[i].getNickname() << "|\n";
		}
	}
	if (std::cin.eof())
		exit (1) ;
	std::cin >> tmp;
	if (std::cin.eof())
		exit (1) ;
	i = atoi(tmp.c_str());
	if (i < 1 || i > 8)
		std::cerr << "Invalid index\n";
	else
	{
		if (!book->contact[i - 1].getFirstName().empty())
		{
			std::cout << "\nFirst Name: " << book->contact[i - 1].getFirstName()
			<< "\nLast Name: " << book->contact[i - 1].getLastName()
			<< "\nNickname: " << book->contact[i - 1].getNickname()
			<< "\nNumber: " << book->contact[i - 1].getNumber()
			<< "\nDarkest Secret: " << book->contact[i - 1].getSecret() << "\n";
		}
		else
			std::cerr << "That index is empty\n";
	}
}



void	Phonebook::print_list(Phonebook *book)
{
	int i = 0;
	while (i < 8)
	{
		std::cout << "First Name: " << book->getContact(i).getFirstName() << std::endl;
		std::cout << "Last Name: " << book->getContact(i).getLastName() << std::endl;
		std::cout << "Nickname: " << book->getContact(i).getNickname() << std::endl;
		std::cout << "Phone Number: " << book->getContact(i).getNumber() << std::endl;
		std::cout << "Darkest Secret: " << book->getContact(i).getSecret() << std::endl;
	}
}
		