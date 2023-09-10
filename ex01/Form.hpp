/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:09:54 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/10 17:49:32 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class	Bureaucrat;

class Form {
	private:
		const std::string	Name;
		bool				Signed;
		const int			Grade;
		const int			GradeExecuted;

	public:
		// Orthodox Canonical Form
		Form(void);
		~Form(void);
		Form(const Form &obj);
		Form	&operator = (const Form &source);

		// Param Constructor
		Form(std::string name, int G, int GE);

		// Implemented Methods
		void	beSigned(const Bureaucrat &form);

		// Getters
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGrade(void) const;
		int			getGradeExecuted(void) const;

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

std::ostream	&operator << (std::ostream &output, const Form &obj);
