/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:38:24 by thallard          #+#    #+#             */
/*   Updated: 2021/03/27 17:45:41 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */)
{
	std::cout << "\e[32mDefault constructor called FR4G-TP\e[0m" << std::endl;
}

FragTrap::FragTrap(std::string Name) : hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100),
									   level(1), name(Name), melee_attack_damage(30), ranged_attack_damage(20), armor_damage_reduction(5)
{
	std::cout << "\e[32mDefault constructor called FR4G-TP " << this->name << "\e[0m" << std::endl;
}

FragTrap::FragTrap(FragTrap const & f) : hit_points(f.hit_points), max_hit_points(f.max_hit_points),
energy_points(f.energy_points), max_energy_points(f.max_energy_points), level(f.level), name(f.name),
melee_attack_damage(f.melee_attack_damage), ranged_attack_damage(f.ranged_attack_damage),
armor_damage_reduction(f.armor_damage_reduction)
{
		std::cout << "\e[32mConstructor by copy called FR4G-TP " << f.name << "\e[0m" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & ref)
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

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "\e[33mFR4G-TP " << this->name << " attaque " << target
			  << " à distance, causant "
			  << this->ranged_attack_damage << " points de dégâts !\e[0m" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "\e[33mFR4G-TP " << this->name << " attaque " << target
			  << " au corps à corps, causant "
			  << this->melee_attack_damage << " points de dégâts !\e[0m" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if ((amount - armor_damage_reduction) > hit_points)
	{
		std::cout << "\e[33mFR4G-TP " << this->name << " se fait attaquer et subit "
				  << hit_points << " points de dégâts!\e[0m" << std::endl;
		this->hit_points = 0;
	}
	else if ((amount - armor_damage_reduction) < hit_points)
	{
		std::cout << "\e[33mFR4G-TP " << this->name << " se fait attaquer et subit "
				  << amount - armor_damage_reduction << " points de dégâts!\e[0m" << std::endl;
		this->hit_points -= (amount - armor_damage_reduction);
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (hit_points + amount > max_hit_points)
	{
		std::cout << "\e[32mFR4G-TP " << name << " a été réparé de "
				  << max_hit_points - hit_points
				  << " HP! (" << max_hit_points << ")\e[0m" << std::endl;
		hit_points = max_hit_points;
	}
	else if (hit_points + amount > 0 && hit_points + amount <= max_hit_points)
	{
		std::cout << "\e[32mFR4G-TP " << name << " a été réparé de "
				  << amount << " HP! (" << amount << ")\e[0m" << std::endl;
		hit_points = amount;
	}
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
		std::cout << "\e[91mPlus assez d'énergie pour lancer vaulthunter_dot_exe avec le FR4G-TP " << name << "!\e[0m" << std::endl;
	energy_points -= 25;
}