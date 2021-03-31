/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:55:10 by thallard          #+#    #+#             */
/*   Updated: 2021/03/31 18:56:38 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "\e[32m* teleports from space *\e[0m" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &ref)
{
	*this = ref;
	std::cout << "\e[32m* teleports from space *\e[0m" << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &ref)
{
	static_cast<void>(ref);
	return *this;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "\e[31mI’ll be back ...\e[0m" << std::endl;
}

AssaultTerminator *AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const
{
	std::cout << "\e[33mThis code is unclean. Purify it !\e[0m" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "\e[35m* does nothing *\e[0m" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "\e[34m* attacks with a chainsword *\e[0m" << std::endl;
}