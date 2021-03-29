/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:44:06 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 17:53:51 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & ref) : AWeapon(ref.name, ref.AP, ref.damage)
{
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const & ref)
{
	name = ref.name;
	AP = ref.AP;
	damage = ref.damage;
	return *this;
}

PlasmaRifle::~PlasmaRifle()
{
}

void PlasmaRifle::attack(void) const
{
	std::cout << "\e[33m* piouuu piouuu piouuu *\e[0m" << std::endl;
}