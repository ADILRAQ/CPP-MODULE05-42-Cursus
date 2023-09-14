/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:28:24 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/14 10:58:55 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:
		// Orthodox Canonical Form
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		PresidentialPardonForm	&operator = (const PresidentialPardonForm &source);

		// Param Constructor
		PresidentialPardonForm(std::string target);

		// Implemented Methods
		void	execute(Bureaucrat const &executer) const;
};