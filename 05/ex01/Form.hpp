/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:18:18 by framador          #+#    #+#             */
/*   Updated: 2025/05/30 18:53:31 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	const	std::string 	_name;
	bool					_check;
	const int 				_sign;
	const int 				_exec;
	
	public:
	Form(std::string name, int sign, int check);
	~Form();
	Form(const Form &other);
	Form &operator=(const Form &other);
	
	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	const 	std::string &getName() const;
	bool 	getCheck() const;
	int 	getSign() const;
	int		getExec() const;
	void	beSigned(Bureaucrat &worker);

		
};
std::ostream &operator<<(std::ostream &out, const Form &Form);

#endif