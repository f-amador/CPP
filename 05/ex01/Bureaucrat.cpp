/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:05:32 by framador          #+#    #+#             */
/*   Updated: 2025/05/30 19:07:04 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(int grade): _name("worker"), _grade(grade)
{

	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat constructor called\n";
}
	
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called\n";	
}
	
Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other._name), _grade(other._grade)
{
		std::cout << "Bureaucrat copy constructor called\n";	
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat constructor called\n";
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		_grade = other._grade;
	}
	return (*this);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

const std::string &Bureaucrat::getName() const
{
	return (_name);
}

void Bureaucrat::decGrade()
{

	if (_grade != 150)
		++_grade;
	else
		throw GradeTooLowException();
}

void Bureaucrat::incGrade()
{
	if (_grade != 1)
		--_grade;
	else
		throw GradeTooHighException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high(Maximum number is 1)\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low(Minimum number is 125)\n");
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const Form::GradeTooLowException &e)
	{
		std::cout << _name << " couldn't sign " << form.getName();
		std::cout << " because:\n" << e.what();
		return ;
	}
	std::cout << _name << " signed " << form.getName() << std::endl;
	
}


std::ostream &operator<<(std::ostream &out, const Bureaucrat &worker)
{
	out << worker.getName() << ", bureaucrat grade " << worker.getGrade();
	return (out);
}
