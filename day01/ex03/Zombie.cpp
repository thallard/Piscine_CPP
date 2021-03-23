/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 19:21:51 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 13:01:20 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie::Zombie(std::string Name, std::string Type) : name(Name), type(Type)
// {
//     std::cout << "\e[32mCréation du zombie " << Name << "!\e[0m" << std::endl;
// }

Zombie::~Zombie()
{
    std::cout << "\e[31mLe zombie " << this->name << " vient d'être détruit!" << std::endl;
}

void Zombie::announce()
{
    std::cout << "\e[33m<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss...\e[0m" << std::endl;
}

std::string Zombie::getName() { return name; }
void Zombie::setName(std::string Name) { name = Name; }
void Zombie::setType(std::string Type) { type = Type; }