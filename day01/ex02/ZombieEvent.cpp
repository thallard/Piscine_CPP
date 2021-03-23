/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 20:02:54 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 12:04:23 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(/* args */)
{
}

ZombieEvent::~ZombieEvent()
{
}

std::string ZombieEvent::getType()
{
    return type;
}

void ZombieEvent::setZombieType(std::string Type)
{
    type = Type;
}

Zombie *ZombieEvent::newZombie(std::string Name)
{
    Zombie *zombie = new Zombie(Name, this->getType());

    return (zombie);
}

Zombie *ZombieEvent::randomChump()
{
    int         rand = std::rand() % 5;
    std::string names[5];
    names[0] = "Bubule";
    names[1] = "Garry";
    names[2] = "Mike";
    names[3] = "Michel";
    names[4] = "Jacqueline";
    
    srand((unsigned) time(0));
    Zombie *zombie = newZombie(names[rand]);
    announce(names[rand]);
    return (zombie);
}

void ZombieEvent::announce(std::string name)
{
    std::cout << "\e[33mLe zombie " << name << " vient de se joindre à la partie!\e[0m" << std::endl;
}