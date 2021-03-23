/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:05:01 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 14:50:39 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string Name) : name(Name)
{
     std::cout << "\e[32mLe HumanB " << Name << " vient d'être créé!\e[0m" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "\e[31mLe HumanB " << name << " et avec l'arme " << weapon->getType() << " vient d'être détruit!\e[0m" << std::endl;
}

void HumanB::attack()
{
    std::cout << "\e[33m" << name << " attaque avec l'arme : " << weapon->getType() << "!\e[0m" << std::endl;
}

void HumanB::setWeapon(Weapon &w) { weapon = &w; }