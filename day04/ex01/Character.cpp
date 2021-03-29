/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:37:38 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 18:59:00 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

	// Character(std::string const &name);
	// Character(Character const &);
	// Character &operator=(Character const &);
	// ~Character();
	// void recoverAP();
	// void equip(AWeapon *);
	// void attack(Enemy *);
	// std::string getName() const;

Character::Character()
{	
}

Character::Character(std::string const &Name) : name(Name), ap(40), weapon(NULL)
{
}

Character::Character(Character const & ref) : name(ref.name), ap(ref.ap), weapon(ref.weapon)
{
}

Character &Character::operator=(Character const & ref)
{
	name = ref.name;
	ap = ref.ap;
	weapon = ref.weapon;
	return *this;
}

Character::~Character()
{
}

void Character::recoverAP()
{
	if ((ap + 10) > 40)
		ap = 40;
	else
		ap += 10;
}

void Character::equip(AWeapon *w)
{
	weapon = w;
}

void Character::attack(Enemy *enemy)
{
	if (!weapon || ap <= 0 || (ap - weapon->getAPCost()) <= 0)
		return ;
	std::cout << "\e[33m" << name << " attack " << enemy->getType() << " with a " << weapon->getName() << "!\e[0m" << std::endl;
	enemy->takeDamage(weapon->getDamage());
	ap -= weapon->getAPCost();
}

std::string Character::getName() const { return this->name; }
int Character::getAP() const { return this->ap; }
AWeapon *Character::getWeapon() const { return this->weapon; }

std::ostream &operator<<(std::ostream &ostream, Character const &ref)
{
	ostream << "\e[31m" << ref.getName() << " has " << ref.getAP() << " and carries a " << ref.getWeapon()->getName() << ".\e[0m" << std::endl;
	return ostream;
}