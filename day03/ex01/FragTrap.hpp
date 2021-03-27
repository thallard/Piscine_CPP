/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:37:42 by thallard          #+#    #+#             */
/*   Updated: 2021/03/27 17:26:07 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


class FragTrap
{
private:
	unsigned int hit_points;
	unsigned int max_hit_points;
	int energy_points;
	unsigned int max_energy_points;
	int level;
	std::string name;
	int melee_attack_damage;
	int ranged_attack_damage;
	int armor_damage_reduction;
public:
	FragTrap();
	FragTrap(std::string Name);
	FragTrap(FragTrap const & frag);
	~FragTrap();
	FragTrap &operator=(FragTrap const & ref);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void beRepaired(unsigned int amount);
	void takeDamage(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};



#endif