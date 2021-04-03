/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:40:45 by thallard          #+#    #+#             */
/*   Updated: 2021/04/03 12:44:00 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM
#define PRESIDENTIAL_PARDON_FORM
#include "Form.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm : public Form
{
private:
	std::string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &);
	~PresidentialPardonForm();
	virtual void execute(Bureaucrat const &) const;
};



#endif