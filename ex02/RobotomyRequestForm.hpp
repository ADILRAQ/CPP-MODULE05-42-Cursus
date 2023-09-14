/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:13:58 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/14 10:58:50 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public:
		// Orthodox Canonical Form
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		RobotomyRequestForm &operator = (const RobotomyRequestForm &source);

		// Param Constructor
		RobotomyRequestForm(std::string target);

		// Implemented Methods
		void	execute(Bureaucrat const &executer) const;
};
