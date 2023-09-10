/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:45:36 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/10 17:44:54 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "Form.hpp"

class	Form;

class Bureaucrat {
	private:
		const std::string	Name;
		int					Grade;

	public:
		// Orthodox Canonical Form
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat	&operator = (const Bureaucrat &source);
		~Bureaucrat(void);

		// Param Constructor
		Bureaucrat(std::string name, int grade);

		// Implemented Methods
		void	Increment(void);
		void	Decrement(void);
		void	signForm(const Form &form);

		// Getters
		std::string	getName(void) const;
		int			getGrade(void) const;

		// Nested Classes
		class GradeTooHighException : public std::exception {
			public:
				const char* what(void) const _NOEXCEPT;
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what(void) const _NOEXCEPT;
		};
};

std::ostream	&operator << (std::ostream &output, const Bureaucrat &obj);
