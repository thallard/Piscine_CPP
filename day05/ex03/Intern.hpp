/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:00:05 by thallard          #+#    #+#             */
/*   Updated: 2021/04/08 12:50:11 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



class Intern
{
private:
	static std::string lst[3];
public:
	Intern();
	Intern(Intern const &);
	Intern &operator=(Intern const &);
	~Intern();
	Form *makeForm(std::string name, std::string target);

	ShrubberyCreationForm *createShrubbery(std::string target);
	RobotomyRequestForm *createRobotomy(std::string target);
};


#endif