/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:53:33 by thallard          #+#    #+#             */
/*   Updated: 2021/04/03 12:29:06 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_CREATION_FORM_HPP
#define SHRUBERRY_CREATION_FORM_HPP
#include "Form.hpp"
#include <string>
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
	~ShrubberyCreationForm();

	virtual void execute(Bureaucrat const &) const;
};

#endif