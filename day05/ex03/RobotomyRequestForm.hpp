/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:09:16 by thallard          #+#    #+#             */
/*   Updated: 2021/04/03 12:26:26 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP
#include "Form.hpp"
#include <string>
#include <iostream>


class RobotomyRequestForm : public Form
{
	private:
	std::string target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &);
	~RobotomyRequestForm();

	virtual void execute(Bureaucrat const &) const;
};




#endif