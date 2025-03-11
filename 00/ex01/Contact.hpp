/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:45:34 by framador          #+#    #+#             */
/*   Updated: 2025/03/11 17:29:29 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class	Contact
{
	int number;
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string secret;

	public:
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
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getSecret();
	
};

#endif