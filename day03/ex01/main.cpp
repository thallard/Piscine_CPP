/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:37:36 by thallard          #+#    #+#             */
/*   Updated: 2021/03/27 17:54:23 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::srand(std::time(nullptr));
	FragTrap *frag1 = new FragTrap("Robert");

	frag1->rangedAttack("Benjamin");
	frag1->meleeAttack("Thomas");
	std::cout << std::endl;
	
	frag1->takeDamage(30);
	frag1->beRepaired(50);
	std::cout << std::endl;

	frag1->takeDamage(30000);
	frag1->beRepaired(10);
	std::cout << std::endl;

	frag1->vaulthunter_dot_exe("Genji");
	frag1->vaulthunter_dot_exe("Hanzo");
	frag1->vaulthunter_dot_exe("Tracer");
	frag1->vaulthunter_dot_exe("Mercy");
	frag1->vaulthunter_dot_exe("Soldier");

	delete frag1;
	std::cout << "------------------------------------" << std::endl;
	ScavTrap *scav = new ScavTrap("Miaou");

	scav->rangedAttack("Robert");
	scav->meleeAttack("Henry");
	
	delete scav;
}