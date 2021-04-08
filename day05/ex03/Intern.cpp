/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:02:15 by thallard          #+#    #+#             */
/*   Updated: 2021/04/08 12:22:51 by thallard         ###   ########lyon.fr   */
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

// std::string Intern::lst[3] = {
// 	"shuberry creation",
// 	"robotomy request",
// 	"presidential pardon"
// };
// typedef Form * (Intern::*form_constr) (std::string target);
// Form *Intern::makeForm(std::string type, std::string name) {
// 	Form *res = NULL;
// 	form_constr	constr [3] = {&Intern::execShrubbery, &Intern::execRobotomy, &Intern::execPresidential};

// 	for(int i = 0; i < 3; i++)
// 		if (type == lst[i])
// 			res = (this->*constr[i])(name);
// 	if (res != NULL)
// 		std::cout << "Intern creates " << *res << std::endl;
// 	else
// 		std::cout << "Error, unrecognized Form type !" << std::endl;
// 	return (res);
// }


// Form &Intern::makeForm(std::string name, std::string target)
// {

// 	Form *res = NULL;
// 	form_constr	constr [3] = {&Intern::execShrubbery, &Intern::execRobotomy, &Intern::execPresidential};

// 	for(int i = 0; i < 3; i++)
// 		if (type == lst[i])
// 			res = (this->*constr[i])(name);
// 	if (res != NULL)
// 		std::cout << "Intern creates " << *res << std::endl;
// 	else
// 		std::cout << "Error, unrecognized Form type !" << std::endl;
// 	return (res);

// }