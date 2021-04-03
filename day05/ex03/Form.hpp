/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:15:49 by thallard          #+#    #+#             */
/*   Updated: 2021/04/03 12:20:10 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Form
{
private:
	std::string name;
	bool isSigned;
	int gradeToExec;
	int gradeToSign;
	Form();
public:
	
	Form(std::string name, bool isSigned, int gradeToExec, int gradeToSign);
	Form(Form const &ref);
	Form &operator=(Form const &ref);
	~Form();

	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
	bool getisSigned() const;

	void setisSigned(bool);
	void setName(std::string name);
	void setGradeToExec(int);
	void setGradeToSign(int);
	void beSigned(Bureaucrat const &);
	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeExecTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &ostream, const Form &ref);

#endif