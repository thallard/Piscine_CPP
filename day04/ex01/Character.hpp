/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:37:42 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 18:57:35 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

class Character
{
private:
	std::string name;
	int ap;
	AWeapon *weapon;
public:
	Character();
	Character(std::string const &name);
	Character(Character const &);
	Character &operator=(Character const &);
	~Character();
	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);
	std::string getName() const;
	int getAP() const;
	AWeapon *getWeapon() const;
};

std::ostream &operator<<(std::ostream &ostream, Character const &ref);

#endif