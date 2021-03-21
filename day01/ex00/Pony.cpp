/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 23:52:02 by thallard          #+#    #+#             */
/*   Updated: 2021/03/21 19:02:18 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string Name, std::string Color) : name(Name), color(Color) {
}

Pony::~Pony() {
    std::cout << "Le Pony " << this->getName() << " vient de se faire détruire !" << std::endl;
}


std::string Pony::getName() {
    return name;
}

std::string Pony::getColor() {
    return color;
}

void Pony::run(Pony *pony)
{
    std::cout << "\e[0;32mLe pony " << pony->getName() << " et de couleur " << pony->getColor() << " court à toute vitesse dans la prairie!\e[0m" << std::endl;
}