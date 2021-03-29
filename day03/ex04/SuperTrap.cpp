/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:09:56 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 15:11:50 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(/* args */)
{
	std::cout << "\e[32mDefault constructor called SuperTrap\e[0m" << std::endl;
}

SuperTrap::SuperTrap(std::string Name) : FragTrap(Name), NinjaTrap(Name)
{
	setHP(100);
	setMaxHP(100);
	setEnergy(120);
	setMaxEnergy(120);
	setLevel(1);
	setName(Name);
	setMelee(60);
	setRanged(20);
	setArmor(5);
	std::cout << "\e[32mDefault constructor called SuperTrap " << Name << "\e[0m" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & ref)
{
	hit_points = ref.hit_points;
	max_hit_points = ref.max_hit_points;
	energy_points = ref.energy_points;
	max_energy_points = ref.max_energy_points;
	level = ref.level;
	name = ref.name;
	melee_attack_damage = ref.melee_attack_damage;
	ranged_attack_damage = ref.ranged_attack_damage;
	armor_damage_reduction = ref.armor_damage_reduction;
	std::cout << "\e[32mConstructor by copy called SuperTrap " << ref.name << "\e[0m" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &ref)
{
	std::cout << "\e[33mAssignation operator called\e[0m" << std::endl;
	hit_points = ref.hit_points;
	max_hit_points = ref.max_hit_points;
	energy_points = ref.energy_points;
	max_energy_points = ref.max_energy_points;
	level = ref.level;
	name = ref.name;
	melee_attack_damage = ref.melee_attack_damage;
	ranged_attack_damage = ref.ranged_attack_damage;
	armor_damage_reduction = ref.armor_damage_reduction;
	return *this;
}

SuperTrap::~SuperTrap()
{
	std::cout << "\e[31mDestructor called SuperTrap " << this->getName() << "\e[0m" << std::endl;
}