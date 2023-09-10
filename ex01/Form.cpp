/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:28:20 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/10 17:50:12 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Orthodox Canonical Form

Form::Form(void) : Name(""), Signed(false), Grade(0), GradeExecuted(0)
{
	throw GradeTooHighException();
}

Form::~Form(void)
{
}

Form::Form(const Form &obj) : Name(obj.Name), Grade(obj.Grade), GradeExecuted(obj.GradeExecuted)
{
	Signed = obj.Signed;
}

Form	&Form::operator = (const Form &source)
{
	if (this != &source)
		this->Signed = source.Signed;
	return (*this);
}

// Param Constructor

Form::Form(std::string name, int G, int GE) : Name(name), Signed(false), Grade(G), GradeExecuted(GE)
{
	if (Grade < 1)
		throw GradeTooHighException();
	else if (Grade > 150)
		throw GradeTooLowException();
}

// Getters

std::string	Form::getName(void) const
{
	return (Name);
}

bool	Form::getSigned(void) const
{
	return (Signed);
}

int	Form::getGrade(void) const
{
	return (Grade);
}

int	Form::getGradeExecuted(void) const
{
	return (GradeExecuted);
}

// Implemented Methods

void	Form::beSigned(const Bureaucrat &form)
{
	if (form.getGrade() < this->Grade && !this->getSigned())
		Signed = true;
}

// Nested Classes

const char	*Form::GradeTooHighException::what(void) const _NOEXCEPT
{
	return ("GRADE TOO HIGH");
}

const char	*Form::GradeTooLowException::what(void) const _NOEXCEPT
{
	return ("GRADE TOO LOW");
}

// Output operator

std::ostream	&operator << (std::ostream &output, const Form &obj)
{
	
	std::cout << obj.getName() << " | " << obj.getGrade() << " | " << obj.getGradeExecuted() << " | " << obj.getSigned();
	return (output);
}
