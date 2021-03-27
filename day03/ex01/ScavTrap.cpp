/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:47:06 by thallard          #+#    #+#             */
/*   Updated: 2021/03/27 17:58:29 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */)
{
	std::cout << "\e[32mDefault constructor called SC4V-TP\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100),
									   level(1), name(Name), melee_attack_damage(30), ranged_attack_damage(20), armor_damage_reduction(5)
{
	std::cout << "\e[32mDefault constructor called SC4V-TP " << this->name << "\e[0m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & f) : hit_points(f.hit_points), max_hit_points(f.max_hit_points),
energy_points(f.energy_points), max_energy_points(f.max_energy_points), level(f.level), name(f.name),
melee_attack_damage(f.melee_attack_damage), ranged_attack_damage(f.ranged_attack_damage),
armor_damage_reduction(f.armor_damage_reduction)
{
		std::cout << "\e[32mConstructor by copy called SC4V-TP " << f.name << "\e[0m" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & ref)
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

ScavTrap::~ScavTrap()
{
	std::cout << "\e[31mDestructor called SC4V-TP " << this->name << "\e[0m" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "\e[33mSC4V-TP " << this->name << " attaque " << target
			  << " à distance, causant "
			  << this->ranged_attack_damage << " points de dégâts !\e[0m" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "\e[33mSC4V-TP " << this->name << " attaque " << target
			  << " au corps à corps, causant "
			  << this->melee_attack_damage << " points de dégâts !\e[0m" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if ((amount - armor_damage_reduction) > hit_points)
	{
		std::cout << "\e[33mSC4V-TP " << this->name << " se fait attaquer et subit "
				  << hit_points << " points de dégâts!\e[0m" << std::endl;
		this->hit_points = 0;
	}
	else if ((amount - armor_damage_reduction) < hit_points)
	{
		std::cout << "\e[33mSC4V-TP " << this->name << " se fait attaquer et subit "
				  << amount - armor_damage_reduction << " points de dégâts!\e[0m" << std::endl;
		this->hit_points -= (amount - armor_damage_reduction);
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (hit_points + amount > max_hit_points)
	{
		std::cout << "\e[32mSC4V-TP " << name << " a été réparé de "
				  << max_hit_points - hit_points
				  << " HP! (" << max_hit_points << ")\e[0m" << std::endl;
		hit_points = max_hit_points;
	}
	else if (hit_points + amount > 0 && hit_points + amount <= max_hit_points)
	{
		std::cout << "\e[32mSC4V-TP " << name << " a été réparé de "
				  << amount << " HP! (" << amount << ")\e[0m" << std::endl;
		hit_points = amount;
	}
}

