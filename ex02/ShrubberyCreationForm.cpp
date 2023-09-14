/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:34:40 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/14 12:09:07 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm()
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &source)
{
	if (this != &source)
		AForm::operator=(source);
	return (*this);
}

// Param Constructor

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{
}

// Implemented Methods

void	ShrubberyCreationForm::execute(Bureaucrat const &executer) const
{
	std::fstream	File;

	if (this->getSigned() && executer.getGrade() <= this->getGradeExecuted())
	{
		File.open(this->getName() + "_shrubbery", std::ios::out);
		if (!File.is_open())
			throw FileCreation();

		File << "       # #### ####\n"
		"    ### \\/#|### |/####\n"
		"  ##\\/#/ \\||/##/_/##/_#\n"
		" ###  \\/###|/ \\/ # ###\n"
		"##_\\_#\\_\\## | #/###_/_####\n"
		"## #### # \\ #| /  #### ##/##\n"
		" __#_--###`  |{,###---###-~\n"
		"          \\ }{\n"
		"            }}{\n"
		"            }}{\n"
		"            {{}\n"
		"     , -=-~{ .-^- _\n";
		File.close();
	}
	else
		throw AForm::NotExecuted();
}

// Nested Class

const char	*ShrubberyCreationForm::FileCreation::what(void) const throw()
{
	return ("!! OPENING FILE FAILED !!");
}
