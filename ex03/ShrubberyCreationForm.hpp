/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:58:31 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/14 12:09:15 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
	public:
		// Orthodox Canonical Form
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm	&operator = (const ShrubberyCreationForm &source);

		// Param Constructor
		ShrubberyCreationForm(std::string target);

		// Implemented Methods
		void	execute(Bureaucrat const &executer) const;

		// Nested Class
		class FileCreation : public std::exception {
			const char	*what(void) const throw();
		};
};
