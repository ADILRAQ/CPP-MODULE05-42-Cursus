/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:45:31 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/14 12:08:41 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Orthodox Canonical Form

Bureaucrat::Bureaucrat(void) : Name(""), Grade(0)
{
	throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : Name(obj.Name)
{
	this->Grade = obj.Grade;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &source)
{
	if (this != &source)
		this->Grade = source.Grade;
	return (*this);
}

// Param Constructor

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name), Grade(grade)
{
	if (Grade < 1)
		throw GradeTooHighException();
	else if (Grade > 150)
		throw GradeTooLowException();
}

// Implemented Methods

void	Bureaucrat::Increment(void)
{
	--Grade;
	if (Grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::Decrement(void)
{
	++Grade;
	if (Grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(const AForm &form)
{
	if (form.getSigned())
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because form isn't signed" << std::endl;
}

void	Bureaucrat::executeForm(AForm const &form)
{
	form.execute(*this);
	std::cout << this->getName() << " executed " << form.getName() << std::endl;
}

// Getters

std::string	Bureaucrat::getName(void) const
{
	return (Name);
}

int	Bureaucrat::getGrade(void) const
{
	return (Grade);
}

// Nested Classes

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("!! GRADE TOO HIGH !!");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("!! GRADE TOO LOW !!");
}

// Output operator

std::ostream	&operator << (std::ostream &output, const Bureaucrat &obj)
{
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (output);
}
