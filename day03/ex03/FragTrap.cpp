/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:38:24 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 11:45:50 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */)
{
	std::cout << "\e[32mDefault constructor called FR4G-TP\e[0m" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	this->setHP(100);
	this->setMaxHP(100);
	this->setEnergy(100);
	this->setMaxEnergy(100);
	this->setLevel(1);
	this->setName(Name);
	this->setMelee(30);
	this->setRanged(20);
	this->setArmor(5);
	std::cout << "\e[32mDefault constructor called FR4G-TP " << getName() << "\e[0m" << std::endl;
}

FragTrap::FragTrap(FragTrap const &f) : ClapTrap(f.name)
{
	this->setHP(f.hit_points);
	this->setMaxHP(f.max_hit_points);
	this->setEnergy(f.energy_points);
	this->setMaxEnergy(f.max_energy_points);
	this->setLevel(f.level);
	this->setName(f.name);
	this->setMelee(f.melee_attack_damage);
	this->setRanged(f.ranged_attack_damage);
	this->setArmor(f.armor_damage_reduction);
	std::cout << "\e[32mConstructor by copy called FR4G-TP " << f.name << "\e[0m" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &ref)
{
	std::cout << "\e[33mAssignation operator called\e[0m" << std::endl;
	this->hit_points = ref.hit_points;
	this->max_hit_points = ref.max_hit_points;
	this->energy_points = ref.energy_points;
	this->max_energy_points = ref.max_energy_points;
	this->level = ref.level;
	this->name = ref.name;
	this->melee_attack_damage = ref.melee_attack_damage;
	this->ranged_attack_damage = ref.ranged_attack_damage;
	this->armor_damage_reduction = ref.armor_damage_reduction;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "\e[31mDestructor called FR4G-TP " << this->name << "\e[0m" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attacks[5] = {"Technique du boomerang inversé!",
							  "Boom boom, badaboum.",
							  "Ryū ga waga teki wo kurau!",
							  "Ryūjin no ken wo kurae!",
							  "Fire in the hole!"};
	int rand = std::rand() % 5;

	if (energy_points > 0)
		std::cout << "\e[35m" << name << " lance " << attacks[rand]
				  << " sur " << target << "\e[0m" << std::endl;
	else
		std::cout << "\e[91mPlus assez d'énergie pour lancer vaulthunter_dot_exe avec " << name << "!\e[0m" << std::endl;
	energy_points -= 25;
}