/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:54:46 by thallard          #+#    #+#             */
/*   Updated: 2021/04/03 12:29:15 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", false, 137, 145)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : Form("ShrubberyCreation", false, 137, 145)
{
	target = Target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & ref) : 
Form(ref.getName(), ref.getisSigned(), ref.getGradeToExec(), ref.getGradeToSign())
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & ref)
{

	setName(ref.getName());
	setGradeToExec(ref.getGradeToExec());
	setGradeToSign(ref.getGradeToSign());
	setisSigned(ref.getisSigned());
	target = ref.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & ref) const
{
	if (ref.getGrade() > getGradeToExec())
		throw GradeExecTooLowException();
	std::ofstream outfile(this->target + "_shrubbery");
	std::ifstream file;

	file.open("reference/tree.txt");
	if (file.is_open())
	{
		std::string tmp((std::istreambuf_iterator<char>(file)), (std::istreambuf_iterator<char>()));
		outfile << tmp << std::endl;
		file.close();
		std::cout << "\e[32mFile " << this->target << "_shrubbery has been created!\e[0m" << std::endl;
	}
	outfile.close();
	
}
