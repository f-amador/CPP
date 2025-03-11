/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:00:57 by framador          #+#    #+#             */
/*   Updated: 2025/03/11 17:05:50 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"


Contact::Contact()
{
	//std::cout << "Contact has been created" << std::endl;
	return ;
}

Contact::~Contact()
{
	//std::cout << "Contact has been destroyed" << std::endl;
	return ;
}

void	Contact::setNumber(int number)
{
	this->number = number;
}

void Contact::setFirstName(std::string s)
{
	this->firstname = s;
}
void Contact::setLastName(std::string s)
{
	this->lastname = s;
}
void Contact::setNickname(std::string s)
{
	this->nickname = s;
}
void Contact::setSecret(std::string s)
{
	this->secret = s;
}
int	Contact::getNumber()
{
	return this->number;
}

std::string	Contact::getFirstName()
{
	return this->firstname;
}

std::string	Contact::getLastName()
{
	return this->lastname;
}

std::string	Contact::getNickname()
{
	return this->nickname;
}

std::string	Contact::getSecret()
{
	return this->secret;
}
