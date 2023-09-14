/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:09:54 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/14 12:08:24 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class	Bureaucrat;

class AForm {
	private:
		const std::string	Name;
		bool				Signed;
		const int			Grade;
		const int			GradeExecuted;

	public:
		// Orthodox Canonical Form
		AForm(void);
		virtual ~AForm(void);
		AForm(const AForm &obj);
		AForm	&operator = (const AForm &source);

		// Param Constructor
		AForm(std::string name, int G, int GE);

		// Implemented Methods
		void	beSigned(const Bureaucrat &bureaucrat);

		// Pure Virtual Function
		virtual void	execute(Bureaucrat const &executer) const = 0;

		// Getters
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGrade(void) const;
		int			getGradeExecuted(void) const;

		// Nested Classes
		class GradeTooHighException : public std::exception {
			public:
				const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char *what(void) const throw();
		};
		class NotExecuted : public std::exception {
			const char	*what(void) const throw();
		};
};

std::ostream	&operator << (std::ostream &output, const AForm &obj);
