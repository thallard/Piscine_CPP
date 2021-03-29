/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:55:18 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 18:01:17 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const & ref) : AWeapon(ref.name, ref.AP, ref.damage)
{
}

PowerFist &PowerFist::operator=(PowerFist const & ref)
{
	name = ref.name;
	AP = ref.AP;
	damage = ref.damage;
	return *this;
}

PowerFist::~PowerFist()
{
}

void PowerFist::attack(void) const
{
	std::cout << "\e[35m* pschhh... SBAM ! *\e[0m" << std::endl;
}