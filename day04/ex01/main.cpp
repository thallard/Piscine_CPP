/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:19:33 by thallard          #+#    #+#             */
/*   Updated: 2021/03/30 11:59:32 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	Character* moi = new Character("Robert");
	std::cout << *moi;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);

	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	return 0;
}