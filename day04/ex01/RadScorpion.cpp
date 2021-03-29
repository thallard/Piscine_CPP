/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:32:06 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 18:37:33 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "\e[32m* click click click *\e[0m" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & ref) : Enemy(ref.hp, ref.type)
{
	std::cout << "\e[32m* click click click *\e[0m" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const & ref)
{
	hp = ref.hp;
	type = ref.type;
	return *this;
}

RadScorpion::~RadScorpion()
{
	std::cout << "\e[31m* SPROTCH *\e[0m" << std::endl;
}
