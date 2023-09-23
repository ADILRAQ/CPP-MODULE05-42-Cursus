/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:45:26 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/23 09:07:40 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try {
		Bureaucrat  obj("Adil", 5);
		ShrubberyCreationForm	obj1("Shrubb 1");
		RobotomyRequestForm	obj2("Robot 2");
		PresidentialPardonForm	obj3("President 3");
		// Shrubbery test
		obj1.beSigned(obj);
		obj.executeForm(obj1);
		// Robotomy test
		obj2.beSigned(obj);
		obj.executeForm(obj2);
		// Presidential test
		obj3.beSigned(obj);
		obj.executeForm(obj3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
