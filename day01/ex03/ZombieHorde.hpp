/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:15:28 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 13:01:40 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{
private:
    Zombie *zombies;
    int    numbers;
public:
    ZombieHorde(int numbers);
    ~ZombieHorde();
    void createZombie(Zombie *zombie, int rand1, int rand2);
};



#endif