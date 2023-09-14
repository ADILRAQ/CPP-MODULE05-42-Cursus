/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:21:33 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/14 14:25:16 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Orthodox Canonical Form

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Intern::Intern(const Intern &obj)
{
	(void)obj;
}

Intern	&Intern::operator = (const Intern &source)
{
	(void)source;
	return (*this);
}

// Implemented Method

AForm	*Intern::makeForm(std::string formType, std::string target)
{
	std::string	Type[3] = {"Shrubbery", "Robotomy", "Presidential"};
	int			i = 0;

	while (i < 3 && formType != Type[i])
		i++;
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << formType << std::endl;
		return (new ShrubberyCreationForm(target));
	case 1:
		std::cout << "Intern creates " << formType << std::endl;
		return (new RobotomyRequestForm(target));
	case 2:
		std::cout << "Intern creates " << formType << std::endl;
		return (new PresidentialPardonForm(target));
	default:
		throw InternProblem();
	}
}

// Nested Class

const char	*Intern::InternProblem::what(void) const throw()
{
	return ("Intern didn't create the form");
}
