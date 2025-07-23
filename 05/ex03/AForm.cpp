/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:18:42 by framador          #+#    #+#             */
/*   Updated: 2025/05/31 11:14:58 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int sign, int exec, std::string target): _name(name),_check(0), _sign(sign), _exec(exec), _target(target) 
{
	if (_sign > 150 || _exec > 150)
		throw(GradeTooLowException());
	else if (_sign < 1 || _exec < 1)
		throw (GradeTooHighException());
	std::cout << "Form Constructor Called\n";
}

AForm::~AForm()
{
	std::cout << "Form Destructor Called\n";
}

AForm::AForm(const AForm &other): _name(other._name), _check(other._check), _sign(other._sign), _exec(other._exec)
{
	std::cout << "Copy Constructor Called\n";
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		_check = other._check;
	return (*this);
}



const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}

const std::string &AForm::getName() const
{
	return (_name);
}

bool	AForm::getCheck() const
{
	return (_check);
}

int		AForm::getSign() const
{
	return(_sign);
}

int AForm::getExec() const
{
	return(_exec);
}

void	AForm::beSigned(Bureaucrat &worker)
{
	if (_check)
	{
		std::cout << "Form already signed!\n";
	}
	else
	{
		if (worker.getGrade() <= _sign)
		{
			std::cout << worker.getName() + " has signed " + this->getName() + "\n";
			_check = true;
		}
		else
			throw AForm::GradeTooLowException();
	}
}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (_sign)
	{
		if (executor.getGrade() <= _exec)
			this->executeForm(executor.getName());

		else
		{
			std::cout << executor.getGrade() << "\nGrade:"  <<executor.getName() <<  "\n";
			throw AForm::GradeTooLowException();
		}
	}

}


std::ostream &operator<<(std::ostream &out, const AForm &Form)
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
