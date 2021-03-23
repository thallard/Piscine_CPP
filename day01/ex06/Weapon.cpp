/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:52:34 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 14:51:21 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    type = std::string("undefined");
}

Weapon::Weapon(std::string Type) : type(Type)
{
    std::cout << "\e[32mL'arme " << type << " vient d'être créé!\e[0m" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "\e[31mL'arme " << type << " vient d'être détruit!\e[0m" << std::endl;
}

std::string& Weapon::getType() { return type; }

void Weapon::setType(std::string Type) { type = Type; }
