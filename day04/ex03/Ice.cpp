/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:28:57 by thallard          #+#    #+#             */
/*   Updated: 2021/03/31 19:52:54 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
	_xp = 0;
	std::cout << "\e[32mIce created !\e[0m" << std::endl;
}

Ice::Ice(Ice const &ref)
{
	type = ref.type;
	_xp = ref._xp;
	std::cout << "\e[32mIce created !\e[0m" << std::endl;
}

Ice &Ice::operator=(Ice const &ref)
{
	type = ref.type;
	_xp = ref._xp;
	return *this;
}

Ice::~Ice()
{
	std::cout << "\e[31mIce destroyed !\e[0m" << std::endl;
}


AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "\e[31m* shoots an ice bolt at " << target.getName() << " *\e[0m" << std::endl;
}