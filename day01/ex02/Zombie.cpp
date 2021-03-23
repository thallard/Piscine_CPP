/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 19:21:51 by thallard          #+#    #+#             */
/*   Updated: 2021/03/21 20:01:22 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name, std::string Type) : name(Name), type(Type)
{
    std::cout << "\e[32mCréation du zombie " << Name << "!\e[0m" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "\e[31mLe zombie " << this->name << " vient d'être détruit!" << std::endl;
}

void    Zombie::advert()
{
    std::cout << "\e[33m<" << this->name << " (" << this->type  << ")> Braiiiiiiinnnssss...\e[0m" << std::endl;
}