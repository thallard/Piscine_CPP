/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:00:30 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 14:47:19 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap(/* args */)
{
	std::cout << "\e[32mDefault constructor called NinjaTrap\e[0m" << std::endl;
}

NinjaTrap::NinjaTrap(std::string Name) : ClapTrap(Name)
{
	setHP(60);
	setMaxHP(60);
	setEnergy(120);
	setMaxEnergy(120);
	setLevel(1);
	setName(Name);
	setMelee(60);
	setRanged(5);
	setArmor(0);
	std::cout << "\e[32mDefault constructor called NinjaTrap " << getName() << "\e[0m" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &f) : ClapTrap(f.name)
{
	setHP(f.hit_points);
	setMaxHP(f.max_hit_points);
	setEnergy(f.energy_points);
	setMaxEnergy(f.max_energy_points);
	setLevel(f.level);
	setName(f.name);
	setMelee(f.melee_attack_damage);
	setRanged(f.ranged_attack_damage);
	setArmor(f.armor_damage_reduction);
	std::cout << "\e[32mConstructor by copy called NinjaTrap " << f.name << "\e[0m" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &ref)
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "\e[31mDestructor called NinjaTrap " << name << "\e[0m" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &ref)
{
	std::cout << "\e[36mLe ninja " << name << " lance un shuriken sur le ClapTrap " << ref.getName() << "!\e[0m" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ref)
{
	std::cout << "\e[36mLe ninja " << name << " lance un shuriken sur le NinjaTrap " << ref.getName() << "!\e[0m" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &ref)
{
	std::cout << "\e[36mLe ninja " << name << " lance un shuriken sur le ScavTrap " << ref.getName() << "!\e[0m" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &ref)
{
	std::cout << "\e[36mLe ninja " << name << " lance un shuriken sur le FragTrap " << ref.getName() << "!\e[0m" << std::endl;
}