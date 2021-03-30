/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:20:15 by thallard          #+#    #+#             */
/*   Updated: 2021/03/30 12:52:27 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &Name, int apcost, int Damage) : name(Name), damage(Damage), AP(apcost)
{
}

AWeapon::AWeapon(AWeapon const &ref)
{
	name = ref.name;
	AP = ref.AP;
	damage = ref.damage;
}

AWeapon &AWeapon::operator=(AWeapon const &ref)
{
	name = ref.name;
	AP = ref.AP;
	damage = ref.damage;
	return *this;
}

AWeapon::~AWeapon()
{
}

void AWeapon::attack() const
{
	
}
std::string AWeapon::getName() const { return this->name; }
int AWeapon::getAPCost() const { return this->AP; }
int AWeapon::getDamage() const { return this->damage; }