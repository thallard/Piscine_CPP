/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:42:38 by thallard          #+#    #+#             */
/*   Updated: 2021/04/03 12:46:51 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", false, 5, 25)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : Form("PresidentialPardonForm", false, 5, 25)
{
	target = Target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & ref) 
: Form(ref.getName(), ref.getisSigned(), ref.getGradeToExec(), ref.getGradeToSign())
{
	target = ref.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & ref)
{
	setName(ref.getName());
	setGradeToExec(ref.getGradeToExec());
	setGradeToSign(ref.getGradeToSign());
	setisSigned(ref.getisSigned());
	target = ref.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & ref) const
{
	if (ref.getGrade() > getGradeToExec())
		throw GradeExecTooLowException();
	std::cout << "\e[33m" << this->target << " has been pardoned by Zafod Beeblebrox.\e[0m" << std::endl;
}