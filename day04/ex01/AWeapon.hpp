/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:16:42 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 17:25:32 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <string>
#include <iostream>

class AWeapon
{
protected:
	std::string name;
	int damage;
	int AP;
public :
	AWeapon();
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const & ref);
	AWeapon &operator=(AWeapon const & ref);
	~AWeapon();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	void attack() const;
};

#endif