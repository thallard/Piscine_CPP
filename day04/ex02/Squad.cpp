/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:16:17 by thallard          #+#    #+#             */
/*   Updated: 2021/04/12 16:20:02 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"


Squad::Squad() : count(0)
{
	
}

Squad::Squad(Squad const & ref)
{
	count = ref.count;
	int i = units.size() - 1;
	while (i >= 0)
	{
		delete units[i];
		units.erase(units.begin() + i);
		i--;
	}
	for (int i = 0; i < ref.count; i++)
		units.push_back(ref.units[i]);
	
}

Squad &Squad::operator=(Squad const & ref)
{
	count = ref.count;
	int i = units.size() - 1;
	while (i >= 0)
	{
		delete units[i];
		units.erase(units.begin() + i);
		i--;
	}
	for (int i = 0; i < ref.count; i++)
		units.push_back(ref.units[i]);
	return *this;
}

Squad::~Squad()
{
	int i = units.size() - 1;
	while (i >= 0)
	{
		delete units[i];
		units.erase(units.begin() + i);
		i--;
	}
}

int Squad::getCount() const { return this->count; }
ISpaceMarine *Squad::getUnit(int pos) const { return this->units[pos]; }

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return 0;
	units.push_back(unit);
	count = units.size();
	return (1);
}