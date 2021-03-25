/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:38:24 by thallard          #+#    #+#             */
/*   Updated: 2021/03/25 13:52:59 by thallard         ###   ########lyon.fr   */
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
	std::cout << "\e[32mDefault constructor called FR4G-TP\e[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\e[31mDestructor called FR4G-TP\e[0m" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	
}