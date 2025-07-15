/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:17:40 by framador          #+#    #+#             */
/*   Updated: 2025/05/30 19:09:03 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <climits>

int main(void)
{

	Bureaucrat a(44);
	Bureaucrat b(1);
	try
	{
		std::cout << "\n\n";

		a = 220;
		std::cout << "\n\n";

	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << a.getName() << "\nERROR: " << e.what();
		//return (1);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << a.getName() << "\nERROR: " << e.what();
		//return (1);
	}
		try
	{
		std::cout << "\n\n";
		b = -10;
		std::cout << "\n\n";

	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr <<  b.getName() <<"\nERROR: " << e.what();
		//return (1);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << b.getName() <<"\nERROR: " << e.what();
		//return (1);
	}
		std::cout << "\n\n";
		AForm form("Teste", 1, 1);
		std::cout << "\n\n";
		a.signForm(form);
		b.signForm(form);
		std::cout << "\n\n";
	ShrubberyCreationForm("teste");
	for (int i = 0; i < 4 ; i++)
		RobotomyRequestForm("teste");
	PresidentialPardonForm("Andrade");
	std::cout << "\n\n";
}