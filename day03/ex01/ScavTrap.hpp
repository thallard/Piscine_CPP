/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:47:09 by thallard          #+#    #+#             */
/*   Updated: 2021/03/27 17:53:58 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class ScavTrap
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
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & ref);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const & ref);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void beRepaired(unsigned int amount);
	void takeDamage(unsigned int amount);
	
};



#endif