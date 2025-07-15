/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:18:42 by framador          #+#    #+#             */
/*   Updated: 2025/05/30 18:56:19 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int sign, int exec): _name(name),_check(0), _sign(sign), _exec(exec) 
{
	if (_sign > 150 || _exec > 150)
		throw(GradeTooLowException());
	else if (_sign < 1 || _exec < 1)
		throw (GradeTooHighException());
	std::cout << "Form Constructor Called\n";
}

Form::~Form()
{
	std::cout << "Form Destructor Called\n";
}

Form::Form(const Form &other): _name(other._name), _check(other._check), _sign(other._sign), _exec(other._exec)
{
	std::cout << "Copy Constructor Called\n";
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		_check = other._check;
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}

const std::string &Form::getName() const
{
	return (_name);
}

bool	Form::getCheck() const
{
	return (_check);
}

int		Form::getSign() const
{
	return(_sign);
}

int Form::getExec() const
{
	return(_exec);
}

void	Form::beSigned(Bureaucrat &worker)
{
		if (worker.getGrade() <= _sign)
			_check = true;
		else
			throw Form::GradeTooLowException();
}


std::ostream &operator<<(std::ostream &out, const Form &Form)
{
	out << "Name: "<< Form.getName() << "\nCheck: ";
	if (Form.getCheck())
		out << true;
	else
		out << false;
	out << "\nSign Level: " << Form.getSign() << "\nExecution Level: ";
	out << Form.getExec() << std::endl;
	return (out);
}
