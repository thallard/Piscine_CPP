/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 12:39:00 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 15:10:12 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class ClapTrap
{
protected:
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
	ClapTrap(/* args */);
	ClapTrap(std::string Name);
	ClapTrap(ClapTrap const & ref);
	~ClapTrap();
	ClapTrap & operator=(ClapTrap const & ref);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void beRepaired(unsigned int amount);
	void takeDamage(unsigned int amount);
	unsigned int getHP() { return this->hit_points; }
	unsigned int getMaxHP() { return this->max_hit_points; }
	int getEnergy() { return this->energy_points; }
	unsigned int getMaxEnergy() { return this->max_energy_points; }
	int getLevel() { return this->level; }
	std::string getName() { return this->name; }
	int getMelee() { return this->melee_attack_damage; }
	int getRanged() { return this->ranged_attack_damage; }
	int getArmor() { return this->armor_damage_reduction; }

	void setHP(unsigned int hp) { this->hit_points = hp; }
	void setMaxHP(unsigned int maxhp) { this->max_hit_points = maxhp; }
	void setEnergy(int nrj) { this->energy_points = nrj; }
	void setMaxEnergy(unsigned int maxnrj) { this->max_energy_points = maxnrj; }
	void setLevel(int lvl) { this->level = lvl; }
	void setName(std::string Name) { this->name = Name; }
	void setMelee(int melee) { this->melee_attack_damage = melee; }
	void setRanged(int ranged) { this->ranged_attack_damage = ranged; }
	void setArmor(int armor) { this->armor_damage_reduction = armor; }
};

#endif