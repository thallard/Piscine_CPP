/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:01:35 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 18:59:56 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int HP, std::string const &Type) : hp(HP), type(Type)
{
}

Enemy::Enemy(Enemy const &ref) : hp(ref.hp), type(ref.type)
{
}

Enemy &Enemy::operator=(Enemy const &ref)
{
	hp = ref.hp;
	type = ref.type;
	return *this;
}

std::string Enemy::getType() const { return this->type; }
int Enemy::getHP() const { return this->hp; }

void Enemy::takeDamage(int amount)
{
	if (amount > hp || amount < 0)
	{
		hp = 0;
		delete this;
		return;
	}
	
	else
	{
		hp -= amount;
	}
}