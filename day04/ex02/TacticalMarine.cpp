/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:05:29 by thallard          #+#    #+#             */
/*   Updated: 2021/03/31 18:56:46 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "\e[32mTactical Marine ready for action !\e[0m" << std::endl;
}


TacticalMarine::TacticalMarine(TacticalMarine const & ref)
{
	*this = ref;
	std::cout << "\e[32mTactical Marine ready for action !\e[0m" << std::endl;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const & ref)
{
	static_cast<void>(ref);
	return *this;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "\e[31mAaargh ...\e[0m" << std::endl;
}

TacticalMarine *TacticalMarine::clone() const
{
	return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const
{
	std::cout << "\e[33mFor the Holy PLOT !\e[0m" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "\e[35m* attacks with a bolter *\e[0m" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "\e[34m* attacks with a chainsword *\e[0m" << std::endl;
}