/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:16:01 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/14 11:03:01 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Orthodox Canonical Form

RobotomyRequestForm::RobotomyRequestForm(void) : AForm()
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &source)
{
	if (this != &source)
		AForm::operator=(source);
	return (*this);
}

// Param Constructor

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{
}

// Implemented Methods

void	RobotomyRequestForm::execute(Bureaucrat const &executer) const
{
	int	generateNumber;

	if (this->getSigned() && executer.getGrade() <= this->getGradeExecuted())
	{
		std::srand(std::time(NULL));
		generateNumber = rand() % 2 + 1;
		if (!(generateNumber % 2))
			std::cout << this->getName() << " has been robotomized successfully." << std::endl;
		else
			std::cout << "robotomy failed." << std::endl;
	}
	else
		throw AForm::NotExecuted();
}
