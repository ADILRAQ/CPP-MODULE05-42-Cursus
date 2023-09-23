/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:45:26 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/23 09:13:29 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	try {
		Bureaucrat  obj("Adil", 5);
		Intern		intern;

		AForm	*ptr = intern.makeForm("Shrubbery", "Form 1");
		ptr->beSigned(obj);
		obj.executeForm(*ptr);
		delete ptr;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
