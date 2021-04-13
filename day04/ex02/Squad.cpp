/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:16:17 by thallard          #+#    #+#             */
/*   Updated: 2021/04/13 14:19:43 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"


Squad::Squad() : count(0), capacity(10)
{
	units = new ISpaceMarine*[10];
}

Squad::Squad(int cap) : count(0), capacity(cap)
{
		units = new ISpaceMarine*[cap];
}

Squad::Squad(Squad const & ref)
{
	count = ref.count;
	capacity = ref.capacity;
	if (count > 0)
		for (int i = 0; i < count; i++)
			delete units[i];
	units = new ISpaceMarine*[capacity];
	for (int i = 0; i < ref.count; i++)
		units[i] = ref.units[i];
}

Squad &Squad::operator=(Squad const & ref)
{
	count = ref.count;
	for (int i = 0; i < ref.count; i++)
		units[i] = ref.units[i];
	delete [] ref.units;
	return *this;
}

Squad::~Squad()
{
	for (int i = 0; i < count; i++)
		delete units[i];
	delete units;
	
}

int Squad::getCount() const { return this->count; }
ISpaceMarine *Squad::getUnit(int pos) const { return this->units[pos]; }

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return 0;
	units[count] = unit;
	count++;
	return (1);
}