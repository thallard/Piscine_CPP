/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:47:33 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 16:56:25 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
	std::cout << "\e[32mZog zog.\e[0m" << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "\e[32mZog zog.\e[0m" << std::endl;
}

Peon::Peon(Peon const & ref) : Victim(ref.name)
{
	std::cout << "\e[32mZog zog.\e[0m" << std::endl;
}

Peon &Peon::operator=(Peon const & ref)
{
	name = ref.name;
	return *this;
}

Peon::~Peon()
{
	std::cout << "\e[31mBleuark...\e[0m" << std::endl;
}

std::ostream &operator<<(std::ostream & ostream, Peon const & ref)
{
	ostream << ref.introduce() << std::endl;
	return ostream;
}