/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:00:17 by thallard          #+#    #+#             */
/*   Updated: 2021/04/13 14:20:39 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* henry = new TacticalMarine;
	ISquad* vlc = new Squad(5);
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(henry);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
