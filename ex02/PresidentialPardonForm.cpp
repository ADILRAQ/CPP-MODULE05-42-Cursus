/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:29:56 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/14 11:03:04 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Orthodox Canonical Form

PresidentialPardonForm::PresidentialPardonForm(void) : AForm()
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator = (const PresidentialPardonForm &source)
{
	if (this != &source)
		AForm::operator=(source);
	return (*this);
}

// Param Constructor

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5)
{
}

// Implemented Methods
void	PresidentialPardonForm::execute(Bureaucrat const &executer) const
{
	if (this->getSigned() && executer.getGrade() <= this->getGradeExecuted())
		std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		throw AForm::NotExecuted();
}
