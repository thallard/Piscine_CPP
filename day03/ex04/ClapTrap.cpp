/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 12:38:50 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 15:10:25 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
	std::cout << "\e[32mDefault constructor called CL4P-TP\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	setName(Name);
	std::cout << "\e[32mDefault constructor called CL4P-TP " << Name << "\e[0m" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & ref)
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
	std::cout << "\e[32mConstructor by copy called ClapTrap " << ref.name << "\e[0m" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &ref)
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

ClapTrap::~ClapTrap()
{
	std::cout << "\e[31mDestructor called CL4P-TP " << this->getName() << "\e[0m" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "\e[33m" << this->name << " attaque " << target
			  << " à distance, causant "
			  << this->ranged_attack_damage << " points de dégâts !\e[0m" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "\e[33m" << this->name << " attaque " << target
			  << " au corps à corps, causant "
			  << this->melee_attack_damage << " points de dégâts !\e[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((amount - armor_damage_reduction) > hit_points)
	{
		std::cout << "\e[33m" << this->name << " se fait attaquer et subit "
				  << hit_points << " points de dégâts!\e[0m" << std::endl;
		this->hit_points = 0;
	}
	else if ((amount - armor_damage_reduction) < hit_points)
	{
		std::cout << "\e[33m" << this->name << " se fait attaquer et subit "
				  << amount - armor_damage_reduction << " points de dégâts!\e[0m" << std::endl;
		this->hit_points -= (amount - armor_damage_reduction);
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points + amount > max_hit_points)
	{
		std::cout << "\e[32m" << name << " a été réparé de "
				  << max_hit_points - hit_points
				  << " HP! (" << max_hit_points << ")\e[0m" << std::endl;
		hit_points = max_hit_points;
	}
	else if (hit_points + amount > 0 && hit_points + amount <= max_hit_points)
	{
		std::cout << "\e[32m" << name << " a été réparé de "
				  << amount << " HP! (" << amount << ")\e[0m" << std::endl;
		hit_points = amount;
	}
}