/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:38:58 by thallard          #+#    #+#             */
/*   Updated: 2021/04/03 12:54:11 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat henry("Henry", 150);
    Bureaucrat robert("Robert", 1);

	ShrubberyCreationForm form1("Maison");
	RobotomyRequestForm robot("Robot");
	PresidentialPardonForm president("Sarkozy");
    std::cout << robert;
    std::cout << henry;
	
	std::cout << robot;
	std::cout << form1; 
	std::cout << president; 
	try
	{
		robert.executeForm(robot);
		henry.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		form1.execute(robert);
		form1.execute(henry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		robot.execute(robert);
		robot.execute(henry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		president.execute(robert);
		president.execute(henry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
}