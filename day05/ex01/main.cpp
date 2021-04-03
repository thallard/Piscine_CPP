/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:38:58 by thallard          #+#    #+#             */
/*   Updated: 2021/04/02 14:29:00 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat henry("Henry", 150);
    Bureaucrat robert("Robert", 1);
	Form form("RSA", false, 100, 1);
    std::cout << robert;
    std::cout << henry;

	std::cout << form;
	try
	{
		form.beSigned(henry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << form;
	form.beSigned(robert);
		std::cout << form;
	
}