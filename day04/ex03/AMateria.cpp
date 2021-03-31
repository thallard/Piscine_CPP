/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:08:28 by thallard          #+#    #+#             */
/*   Updated: 2021/03/31 17:07:44 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &Type) : _xp(0), type(Type)
{
	std::cout << "\e[32mNew Materia created !\e[0m" << std::endl;
}

AMateria::AMateria(AMateria const & ref) : _xp(ref._xp), type(ref.type)
{
}

AMateria &AMateria::operator=(AMateria const & ref)
{
	type = ref.type;
	_xp = ref._xp;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "\e[31mMateria destroyed !\e[0m" << std::endl;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}
