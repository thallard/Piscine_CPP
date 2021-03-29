/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:07:22 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 16:52:18 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string Name) : name(Name)
{
	std::cout << "\e[32mA random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "\e[31mThe victim " << name << " died for no apparent reasons!\e[0m" << std::endl;
}

std::string Victim::introduce() const
{
	return ("\e[36mI'm " + getName() + " and I like otters!\e[0m");
}

std::ostream &operator<<(std::ostream &ostream, Victim const &ref)
{
	ostream << ref.introduce() << std::endl;
	return ostream;
}

void Victim::getPolymorphed(void) const
{
	std::cout << "\e[35m" << name << " was just polymorphed in a cute little sheep!\e[0m" << std::endl;
}

std::string Victim::getName() const { return this->name; }