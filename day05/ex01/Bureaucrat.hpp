/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:39:45 by thallard          #+#    #+#             */
/*   Updated: 2021/04/02 14:14:07 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <exception>

class Form;
class Bureaucrat
{
private:
	std::string name;
	int grade;
	Bureaucrat();

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &);
	Bureaucrat &operator=(Bureaucrat const &);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void riseGrade();
	void downGrade();
	void signForm(Form const &) const;

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &ostream, const Bureaucrat &ref);

#endif