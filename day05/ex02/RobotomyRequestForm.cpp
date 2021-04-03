/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:10:24 by thallard          #+#    #+#             */
/*   Updated: 2021/04/03 12:38:04 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", false, 45, 72)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("RobotomyRequestForm", false, 45, 72)
{
	target = Target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & ref) : 
Form(ref.getName(), ref.getisSigned(), ref.getGradeToExec(), ref.getGradeToSign())
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & ref)
{
	setName(ref.getName());
	setGradeToExec(ref.getGradeToExec());
	setGradeToSign(ref.getGradeToSign());
	setisSigned(ref.getisSigned());
	target = ref.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & ref) const
{
	if (ref.getGrade() > getGradeToExec())
		throw GradeExecTooLowException();
	std::cout << "\e[33m" << this->target << " has been robotomized successfully 50% of the time.\e[0m" << std::endl;
}