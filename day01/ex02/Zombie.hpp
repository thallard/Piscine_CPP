/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 19:18:53 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 12:02:57 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Zombie
{
private:
    std::string name;
    std::string type;

public:
    Zombie(std::string Name, std::string Type);
    ~Zombie();
    void advert();
    std::string getName();
    std::string getType();
};



#endif