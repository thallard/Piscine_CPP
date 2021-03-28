/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 12:38:50 by thallard          #+#    #+#             */
/*   Updated: 2021/03/28 13:40:10 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
	std::cout << "\e[32mDefault constructor called CL4P-TP\e[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[31mDestructor called CL4P-TP " << this->getName() << "\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	(void)Name;
	std::cout << "\e[32mDefault constructor called CL4P-TP " << Name << "\e[0m" << std::endl;
}