/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:51:05 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 14:51:32 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(/* args */);
    Weapon(std::string Type);
    ~Weapon();
    std::string &getType();
    void setType(std::string type);
};



#endif