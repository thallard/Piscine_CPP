/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:38:58 by thallard          #+#    #+#             */
/*   Updated: 2021/04/01 17:07:14 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bob("Bob", 100);
    Bureaucrat henry("Henry", 150);
    Bureaucrat robert("Robert", 1);

    std::cout << bob;
    std::cout << robert;
    std::cout << henry;
    try
    {
        henry.riseGrade();
        std::cout << henry;
        henry.downGrade();
        std::cout << henry;
        henry.downGrade();
        std::cout << henry;
    }
    catch (const std::exception &e) { std::cerr << e.what() << '\n'; }
    try
    {
        robert.riseGrade();
    }
    catch (const std::exception &e) { std::cerr << e.what() << '\n'; }
    try
    {
        Bureaucrat paul("Paul", 0);
    }
    catch (const std::exception &e) { std::cerr << e.what() << '\n'; }
}