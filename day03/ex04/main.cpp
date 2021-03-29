/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:37:36 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 14:31:25 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::srand(std::time(nullptr));
	FragTrap *frag1 = new FragTrap("Robert");
	ScavTrap *scav = new ScavTrap("Miaou");
	NinjaTrap *ninja = new NinjaTrap("Yoko");
	ClapTrap *clap = new ClapTrap("Titou");
	SuperTrap *trap = new SuperTrap("Dylan");

	frag1->rangedAttack("Benjamin");
	scav->rangedAttack("Robert");
	ninja->rangedAttack("Manon");
	frag1->meleeAttack("Thomas");
	scav->meleeAttack("Henry");
	ninja->meleeAttack("Pascal");
	std::cout << std::endl;

	frag1->takeDamage(30);
	frag1->beRepaired(50);
	scav->takeDamage(50);
	scav->beRepaired(100);
	ninja->takeDamage(59);
	ninja->beRepaired(1);
	std::cout << std::endl;

	frag1->takeDamage(30000);
	frag1->beRepaired(10);
	scav->takeDamage(5000);
	scav->beRepaired(30);
	ninja->takeDamage(61);
	ninja->beRepaired(10000);
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

	std::cout << std::endl;
	ClapTrap &clap1 = *clap;
	NinjaTrap &ninja1 = *ninja;
	FragTrap &frag = *frag1;
	ScavTrap &scav1 = *scav;
	ninja->ninjaShoebox(clap1);
	ninja->ninjaShoebox(ninja1);
	ninja->ninjaShoebox(scav1);
	ninja->ninjaShoebox(frag);

	std::cout << std::endl;
	trap->ninjaShoebox(frag);
	trap->vaulthunter_dot_exe("Meline");
	delete frag1;
	delete scav;
	delete ninja;
	delete trap;
}