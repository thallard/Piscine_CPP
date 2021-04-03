/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:17:52 by thallard          #+#    #+#             */
/*   Updated: 2021/04/02 14:36:27 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
	std::cout << "\e[32mForm " << name << " has been created.\e[0m" << std::endl;
}

Form::Form(std::string Name, bool Signed, int GradeToExec, int GradeToSign) : name(Name), isSigned(Signed), gradeToExec(GradeToExec), gradeToSign(GradeToSign)
{
	std::cout << "\e[32mForm " << Name << " has been created.\e[0m" << std::endl;
}

Form::Form(Form const & ref)
{
	name = ref.name;
	isSigned = ref.isSigned;
	gradeToExec = ref.gradeToExec;
	gradeToSign = ref.gradeToSign;
	std::cout << "\e[32mForm " << name << " has been created.\e[0m" << std::endl;
}

Form &Form::operator=(Form const & ref)
{
	name = ref.name;
	isSigned = ref.isSigned;
	gradeToExec = ref.gradeToExec;
	gradeToSign = ref.gradeToSign;
	return *this;
}

Form::~Form()
{
	std::cout << "\e[31mForm " << name << " has been destroyed.\e[0m" << std::endl;
}

void Form::beSigned(Bureaucrat const & ref)
{
	if (ref.getGrade() > this->getGradeToSign())
	{
		ref.signForm(*this);
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		ref.signForm(*this);
		isSigned = true;
	}
}

void Form::setisSigned(bool value)
{
	isSigned = value;
}

std::ostream &operator<<(std::ostream &ostream, const Form &ref)
{
	ostream << "\e[34mForm " << ref.getName() << " and is ";
	if (ref.getisSigned() == true)
		ostream << "signed";
	else
		ostream << "is not signed";
	ostream << ", with a grade to sign : " << ref.getGradeToSign() << " and a grade to exec : " << ref.getGradeToExec() << "\e[0m" << std::endl;
	return ostream;
}

// Getters
std::string Form::getName() const { return this->name; }
bool Form::getisSigned() const { return this->isSigned; }
int Form::getGradeToExec() const { return this->gradeToExec; }
int Form::getGradeToSign() const { return this->gradeToSign; }