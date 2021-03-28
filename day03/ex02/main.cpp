/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:37:36 by thallard          #+#    #+#             */
/*   Updated: 2021/03/28 13:39:15 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	std::srand(std::time(nullptr));
	FragTrap *frag1 = new FragTrap("Robert");
	ScavTrap *scav = new ScavTrap("Miaou");

	frag1->rangedAttack("Benjamin");
	scav->rangedAttack("Robert");
	frag1->meleeAttack("Thomas");
	scav->meleeAttack("Henry");
	std::cout << std::endl;

	frag1->takeDamage(30);
	frag1->beRepaired(50);
	scav->takeDamage(50);
	scav->beRepaired(100);
	std::cout << std::endl;

	frag1->takeDamage(30000);
	frag1->beRepaired(10);
	scav->takeDamage(5000);
	scav->beRepaired(30);
	std::cout << std::endl;

	frag1->vaulthunter_dot_exe("Genji");
	frag1->vaulthunter_dot_exe("Hanzo");
	frag1->vaulthunter_dot_exe("Tracer");
	frag1->vaulthunter_dot_exe("Mercy");
	frag1->vaulthunter_dot_exe("Soldier");

	// scav->challengeNewComer();
	// scav->challengeNewComer();
	// scav->challengeNewComer();
	// scav->challengeNewComer();
	// scav->challengeNewComer();

	delete frag1;
	delete scav;
}