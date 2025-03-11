/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:16:26 by framador          #+#    #+#             */
/*   Updated: 2025/03/10 17:55:27 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

#include "Contact.hpp"
#include "Phonebook.hpp"

void print_list(Phonebook *book);
void add_contact(Phonebook *book);
void search_contact(Phonebook *book);
void prompter(std::string prompt, Phonebook *book);

#endif