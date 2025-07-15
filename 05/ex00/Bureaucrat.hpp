/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:02:04 by framador          #+#    #+#             */
/*   Updated: 2025/05/30 11:41:51 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <sstream>

class Bureaucrat {

	const std::string _name;
	int		_grade;

	public:
		Bureaucrat(int grade);
		Bureaucrat(std::string name, int grade);

		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		
		
		class GradeTooHighException : public std::exception {
    		public:
        		virtual const char* what() const throw();
    	};
    
    	class GradeTooLowException : public std::exception {
    		public:
        		virtual const char* what() const throw();
    	};
		const std::string &getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);


#endif