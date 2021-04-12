/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Boomboom.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:44:06 by thallard          #+#    #+#             */
/*   Updated: 2021/03/30 11:52:27 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Boomboom.hpp"

Boomboom::Boomboom() : AWeapon("Plasma Rifle", 5, 21)
{
}

Boomboom::Boomboom(Boomboom const & ref) : AWeapon(ref.name, ref.AP, ref.damage)
{
}

Boomboom &Boomboom::operator=(Boomboom const & ref)
{
	name = ref.name;
	AP = ref.AP;
	damage = ref.damage;
	return *this;
}

Boomboom::~Boomboom()
{
}

void Boomboom::attack(void) const
{
	std::cout << "\e[35m* piouuu piouuu piouuu *\e[0m" << std::endl;
}