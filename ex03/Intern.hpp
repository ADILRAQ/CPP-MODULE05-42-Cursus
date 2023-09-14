/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:21:27 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/14 14:16:32 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
		// Orthodox Canonical Form
		Intern(void);
		~Intern(void);
		Intern(const Intern &obj);
		Intern	&operator = (const Intern &surce);

		// Implemented Method
		AForm	*makeForm(std::string formType, std::string target);

		// Nested Class
		class InternProblem : public std::exception {
			const char	*what(void) const throw();
		};
};
