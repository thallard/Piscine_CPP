/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:16:17 by thallard          #+#    #+#             */
/*   Updated: 2021/03/30 14:07:55 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : count(0), units(NULL)
{
}

Squad::Squad(Squad const & ref)
{
	count = ref.count;

}

Squad &Squad::operator=(Squad const & ref)
{
	count = ref.count;
	units = ref.units;
	return *this;
}

Squad::~Squad()
{
	delete [] units;
}

int Squad::getCount() const { return this->count; }
ISpaceMarine *Squad::getUnit(int pos) const { return this->units[pos]; }

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return 0;
	if (count == 0)
	{
		units[0] = unit;
		units[1] = NULL;
		count++;
		return (1);
	}
	else if (count >= 1)
	{
		int i;
		for (i = 0; i < count; i++)
			;
		units[i] = unit;
		units[i + 1] = NULL;
	}
	return (1);
}