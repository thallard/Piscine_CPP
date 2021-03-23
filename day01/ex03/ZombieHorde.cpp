/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:16:00 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 13:07:01 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int nb) : numbers(nb)
{
    zombies = new Zombie[nb];
    
    std::srand(std::time(nullptr));
    for (int i = 0; i < nb; i++)
        createZombie(&zombies[i], std::rand() % 5, std::rand() % 5);
    numbers = nb;
}

ZombieHorde::~ZombieHorde()
{
    std::cout << "\e[31mDestruction de ZombieHorde !" << std::endl;
    delete [] zombies;
}

void ZombieHorde::createZombie(Zombie *zombie, int rand1, int rand2)
{
    std::string names[5] = { "Bubule", "Garry", "Mike", "Michel", "Jacqueline"};
    std::string types[5] = { "Le malin", "Le stratège", "Le loubard", "Le simplet", "Le casse-cou"};
    
    zombie->setName(names[rand1]);
    zombie->setType(types[rand2]);
    std::cout << "\e[32mCréation du zombie " << zombie->getName() << "!\e[0m" << std::endl;
    zombie->announce();
}   