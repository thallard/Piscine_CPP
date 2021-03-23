/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:00:25 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 14:50:59 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string Name, Weapon &W) : name(Name), weapon(W)
{
     std::cout << "\e[32mLe HumanA " << Name << " et avec l'arme " << weapon.getType() << " vient d'être créé!\e[0m" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "\e[31mLe HumanA " << name << " et avec l'arme " << weapon.getType() << " vient d'être détruit!\e[0m" << std::endl;
}

void HumanA::attack()
{
    std::cout << "\e[33m" << name << " attaque avec l'arme : " << weapon.getType() << "!\e[0m" << std::endl;
}