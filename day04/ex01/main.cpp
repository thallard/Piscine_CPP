/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:19:33 by thallard          #+#    #+#             */
/*   Updated: 2021/04/12 11:02:23 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Ougabouga.hpp"
#include "Boomboom.hpp"

int main()
{
	Character* moi = new Character("Robert");
	std::cout << *moi;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	Ougabouga *ou = new Ougabouga();
	Boomboom *boom = new Boomboom();
	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);
	moi->attack(ou);
	moi->equip(boom);
	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	delete moi;
	delete pr;
	delete pf;
	delete boom;
	delete b;
	return 0;
}