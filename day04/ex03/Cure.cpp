/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:29:03 by thallard          #+#    #+#             */
/*   Updated: 2021/03/31 14:48:37 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "\e[32mCure created !\e[0m" << std::endl;
}

Cure::Cure(Cure const &ref)
{
	type = ref.type;
	_xp = ref._xp;
	std::cout << "\e[32mCure created !\e[0m" << std::endl;
}

Cure &Cure::operator=(Cure const &ref)
{
	type = ref.type;
	_xp = ref._xp;
	return *this;
}

Cure::~Cure()
{
	std::cout << "\e[31mCure destroyed !\e[0m" << std::endl;
}


Cure* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "\e[31m* heals " << target.getName() << "’s wounds *\e[0m" << std::endl;
}