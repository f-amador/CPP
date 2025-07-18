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

	Bureaucrat a(150);
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
		b.incGrade();
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
	ShrubberyCreationForm teste;
	std::cout << "here";
	try
	{
		teste.execute(a);
		teste.beSigned(b);
		teste.execute(b);
		teste.beSigned(a);
	}
	catch(AForm::GradeTooLowException& e)
	{
		std::cerr << "Error Couldn't exec\nReason:" << e.what() << '\n';
	}
	
}