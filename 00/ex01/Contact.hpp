/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:45:34 by framador          #+#    #+#             */
/*   Updated: 2025/05/31 10:38:32 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class	Contact
{
	int _number;
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;

	public:
	std::string _secret;
	Contact();
	~Contact();
	//Set values
	void setNumber(int number);
	void setFirstName(std::string s);
	void setLastName(std::string s);
	void setNickname(std::string s);
	void setSecret(std::string s);
	
	//Get values
	int getNumber();
	const std::string &getFirstName();
	const std::string &getLastName();
	const std::string &getNickname();
	const std::string &getSecret();
	
};

#endif