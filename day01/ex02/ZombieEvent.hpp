/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 20:02:57 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 12:01:30 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string type;
public:
    ZombieEvent(/* args */);
    ~ZombieEvent();
    void setZombieType(std::string type);
    Zombie * newZombie(std::string name);
    Zombie *randomChump();
    void announce(std::string name);
    std::string getType();
};

#endif