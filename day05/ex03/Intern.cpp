/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:02:15 by thallard          #+#    #+#             */
/*   Updated: 2021/04/07 11:37:16 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & ref)
{
	*this = ref;
}

Intern &Intern::operator=(Intern const & ref)
{
	(void)ref;
	return *this;
}

Intern::~Intern()
{
}


Form &Intern::makeForm(std::string name, std::string target)
{
	std::vector<std::string, Form *> consteructs[1] = { "robotomy request", RobotomyRequestForm()};

}