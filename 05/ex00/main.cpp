/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:17:40 by framador          #+#    #+#             */
/*   Updated: 2025/05/30 11:58:26 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cstdlib>
#include <climits>

int main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cout << "Usage: ./Bureaucrat (string)Name (int) Grade\n";
		return (1);
	}
	
	Bureaucrat a(1);
	char *endptr;
	long grade = std::strtol(av[2], &endptr, 10);
	
	if (*endptr != '\0' || av[2] == endptr)
	{
		std::cerr << "Error: Grade must be a number\n";
		return (1);
	}
	if (grade > INT_MAX || grade < INT_MIN)
	{
		std::cerr << "Error: Grade out of range\n";
		return (1);
	}
	try {

		Bureaucrat b(av[1], grade);

		std::cout << "User Created Bureaucrat" << b << std::endl;

	}
	catch(const Bureaucrat::GradeTooHighException &e )
	{
		std::cerr << "ERROR: " << e.what() << std::endl;
		return (1);
	}
	catch(const Bureaucrat::GradeTooLowException &e )
	{
		std::cerr << "ERROR: " << e.what() << std::endl;
		return (1);
	}
	catch(const std::exception &e )
	{
		std::cerr << " FATAL ERROR\n";
		return (1);
	}
	std::cout << "Original Bureaucrat: " << a << std::endl;
	return (0);
}