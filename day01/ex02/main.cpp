/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 19:17:08 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 12:06:11 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    Zombie z1 = Zombie("Théo", "Le loubard");
   
    ZombieEvent *event = new ZombieEvent();
    event->setZombieType("Le bouclé");
    Zombie *z2 = event->newZombie("Quentin");

    event->setZombieType("Le petit nouveau");
    Zombie *z3 = event->randomChump();
    
    z1.advert();
    z2->advert();
    z3->advert();
    delete z2;
    delete z3;
    return 0;
}