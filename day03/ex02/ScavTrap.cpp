/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:47:06 by thallard          #+#    #+#             */
/*   Updated: 2021/03/28 13:54:09 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */)
{
	std::cout << "\e[32mDefault constructor called SC4V-TP\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	this->setHP(100);
	this->setMaxHP(100);
	this->setEnergy(50);
	this->setMaxEnergy(50);
	this->setLevel(1);
	this->setName(Name);
	this->setMelee(20);
	this->setRanged(15);
	this->setArmor(3);
	std::cout << "\e[32mDefault constructor called SC4V-TP " << this->name << "\e[0m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &f) : ClapTrap(f.name)
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
	std::cout << "\e[32mConstructor by copy called SC4V-TP " << f.name << "\e[0m" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &ref)
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
	std::cout << "\e[1;34mSC4V-TP " << this->name << " attaque " << target
			  << " à distance, causant "
			  << this->ranged_attack_damage << " points de dégâts !\e[0m" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "\e[1;34mSC4V-TP " << this->name << " attaque " << target
			  << " au corps à corps, causant "
			  << this->melee_attack_damage << " points de dégâts !\e[0m" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if ((amount - armor_damage_reduction) > hit_points)
	{
		std::cout << "\e[1;34mSC4V-TP " << this->name << " se fait attaquer et subit "
				  << hit_points << " points de dégâts!\e[0m" << std::endl;
		this->hit_points = 0;
	}
	else if ((amount - armor_damage_reduction) < hit_points)
	{
		std::cout << "\e[1;34mSC4V-TP " << this->name << " se fait attaquer et subit "
				  << amount - armor_damage_reduction << " points de dégâts!\e[0m" << std::endl;
		this->hit_points -= (amount - armor_damage_reduction);
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (hit_points + amount > max_hit_points)
	{
		std::cout << "\e[1;34mSC4V-TP " << name << " a été réparé de "
				  << max_hit_points - hit_points
				  << " HP! (" << max_hit_points << ")\e[0m" << std::endl;
		hit_points = max_hit_points;
	}
	else if (hit_points + amount > 0 && hit_points + amount <= max_hit_points)
	{
		std::cout << "\e[1;34mSC4V-TP " << name << " a été réparé de "
				  << amount << " HP! (" << amount << ")\e[0m" << std::endl;
		hit_points = amount;
	}
}

void ScavTrap::challengeNewComer(void)
{
	std::string names_challenge[3] = {"Combien font 2 + 2 ?",
									  "Quelle est la couleur du cheval blanc d'Henry IV?",
									  "Un jeu de cartes contient combien de cartes ?"};
	int rand = std::rand() % 3;
	std::string answer;

	if (energy_points < 25)
	{
		std::cout << "\e[91mPlus assez d'énergie pour lancer vaulthunter_dot_exe avec le SC4V-TP " << name << "!\e[0m" << std::endl;
		return;
	}
	std::cout << "\e[1;35mSC4V-TP " << name
			  << " vous pose la question suivante : " << names_challenge[rand] << "\e[0m" << std::endl;
	std::getline(std::cin, answer);
	if (rand == 0)
	{
		if (answer == "4")
			std::cout << "\e[1;32mSC4V-TP " << name << " vous répond : Réponse correcte!\e[0m" << std::endl;
		else
			std::cout << "\e[1;31mSC4V-TP " << name << " vous répond : Réponse incorrecte!\e[0m" << std::endl;
	}
	if (rand == 1)
	{
		if (answer == "blanc" || answer == "Blanc")
			std::cout << "\e[1;32mSC4V-TP " << name << " vous répond : Réponse correcte!\e[0m" << std::endl;
		else
			std::cout << "\e[1;31mSC4V-TP " << name << " vous répond : Réponse incorrecte!\e[0m" << std::endl;
	}
	if (rand == 2)
	{
		if (answer == "52")
			std::cout << "\e[1;32mSC4V-TP " << name << " vous répond : Réponse correcte!\e[0m" << std::endl;
		else
			std::cout << "\e[1;31mSC4V-TP " << name << " vous répond : Réponse incorrecte!\e[0m" << std::endl;
	}
	energy_points -= 25;
}