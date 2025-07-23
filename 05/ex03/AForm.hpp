/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:18:18 by framador          #+#    #+#             */
/*   Updated: 2025/05/31 11:14:26 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <ctime>

#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm
{
	protected:
		const	std::string 	_name;
		bool					_check;
		const int 				_sign;
		const int 				_exec;
		const	std::string		_target;
		virtual void	executeForm(std::string target) const  = 0;
	
	public:
		AForm():_sign(150), _exec(150) {};
		AForm(std::string name, int sign, int check, std::string target);
		virtual ~AForm();
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		//the what doesnt need to be virtual but its good practice in case I want to create an exception from here
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		const 	std::string &getName() const;
		bool 	getCheck() const;
		int 	getSign() const;
		int		getExec() const;
		void	beSigned(Bureaucrat &worker);
		void	execute(const Bureaucrat &executor) const;

		
};
std::ostream &operator<<(std::ostream &out, const AForm &Form);

#endif