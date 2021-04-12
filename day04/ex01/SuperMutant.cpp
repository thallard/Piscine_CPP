/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:18:59 by thallard          #+#    #+#             */
/*   Updated: 2021/04/12 15:58:31 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "\e[32mGaaah. Break everything !\e[0m" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & ref) : Enemy(ref.hp, ref.type)
{
	std::cout << "\e[32mGaaah. Break everything !\e[0m" << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const & ref)
{
	hp = ref.hp;
	type = ref.type;
	return *this;
}

SuperMutant::~SuperMutant()
{
	std::cout << "\e[31mAaargh ...\e[0m" << std::endl;
}

void SuperMutant::takeDamage(int value)
{
	if (value - 3 < 0)
		value = 0;
	else
		value -= 3;
	if ((hp - value) < 0)
	{
		hp -= value;
		delete this;
	}
	else
		hp = 0;
}