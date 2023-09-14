/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:28:20 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/14 12:08:04 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Orthodox Canonical Form

AForm::AForm(void) : Name(""), Signed(false), Grade(0), GradeExecuted(0)
{
	throw GradeTooHighException();
}

AForm::~AForm(void)
{
}

AForm::AForm(const AForm &obj) : Name(obj.Name), Grade(obj.Grade), GradeExecuted(obj.GradeExecuted)
{
	Signed = obj.Signed;
}

AForm	&AForm::operator = (const AForm &source)
{
	if (this != &source)
		this->Signed = source.Signed;
	return (*this);
}

// Param Constructor

AForm::AForm(std::string name, int G, int GE) : Name(name), Signed(false), Grade(G), GradeExecuted(GE)
{
	if (Grade < 1)
		throw GradeTooHighException();
	else if (Grade > 150)
		throw GradeTooLowException();
}

// Getters

std::string	AForm::getName(void) const
{
	return (Name);
}

bool	AForm::getSigned(void) const
{
	return (Signed);
}

int	AForm::getGrade(void) const
{
	return (Grade);
}

int	AForm::getGradeExecuted(void) const
{
	return (GradeExecuted);
}

// Implemented Methods

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->Grade && !this->getSigned())
		Signed = true;
}

// Nested Classes

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("!! GRADE TOO HIGH !!");
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("!! GRADE TOO LOW !!");
}

const char	*AForm::NotExecuted::what(void) const throw()
{
	return ("Form Not Executed !");
}

// Output operator

std::ostream	&operator << (std::ostream &output, const AForm &obj)
{
	
	std::cout << obj.getName() << " | " << obj.getGrade() << " | " << obj.getGradeExecuted() << " | " << obj.getSigned();
	return (output);
}
