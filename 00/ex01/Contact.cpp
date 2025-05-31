/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:00:57 by framador          #+#    #+#             */
/*   Updated: 2025/05/31 10:39:13 by framador         ###   ########.fr       */
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
	_number = number;
}

void Contact::setFirstName(std::string s)
{
	_firstname = s;
}
void Contact::setLastName(std::string s)
{
	_lastname = s;
}
void Contact::setNickname(std::string s)
{
	_nickname = s;
}
void Contact::setSecret(std::string s)
{
	_secret = s;
}
int	Contact::getNumber()
{
	return _number;
}

const std::string	&Contact::getFirstName()
{
	return _firstname;
}

const std::string	&Contact::getLastName()
{
	return _lastname;
}

const std::string	&Contact::getNickname()
{
	return _nickname;
}

const std::string	&Contact::getSecret()
{
	return _secret;
}
