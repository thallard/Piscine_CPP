/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:42:54 by thallard          #+#    #+#             */
/*   Updated: 2021/04/01 17:04:54 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name)
{
    if (Grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (Grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else
    {
        grade = Grade;
        std::cout << "\e[32mBureaucrat " << name << " with grade " << grade << " has been created!\e[0m" << std::endl; 
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const & ref) : name(ref.name), grade(ref.grade)
{
     std::cout << "\e[32mBureaucrat " << name << " with grade " << grade << " has been created!\e[0m" << std::endl; 
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & ref)
{
    name = ref.name;
    grade = ref.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
     std::cout << "\e[31mBureaucrat " << name << " with grade " << grade << " has been destroyed!\e[0m" << std::endl; 
}


std::string Bureaucrat::getName() const { return this->name; }
int Bureaucrat::getGrade() const { return this->grade; }

void Bureaucrat::riseGrade()
{
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else    
        grade--;
}

void Bureaucrat::downGrade()
{
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "\e[31mError : Grade is to high.\e[0m";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "\e[31mError : Grade is to low.\e[0m";
}

std::ostream &operator<<(std::ostream &ostream, const Bureaucrat &ref)
{
    ostream << "\e[35m" << ref.getName() << ", bureaucrat grade " << ref.getGrade() << ".\e[0m" << std::endl;
    return ostream;
}