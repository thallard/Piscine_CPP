/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:01:43 by thallard          #+#    #+#             */
/*   Updated: 2021/03/30 11:27:37 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <string>
#include <iostream>

class Enemy
{
protected:
	int hp;
	std::string type;
public:
	Enemy();
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const & ref);
	Enemy &operator=(Enemy const & ref);
	virtual ~Enemy();
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif