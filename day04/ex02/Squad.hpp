/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:59:26 by thallard          #+#    #+#             */
/*   Updated: 2021/04/13 14:10:51 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP
#include <string>
#include <iostream>
#include <vector>
#include "ISquad.hpp"

class Squad : public ISquad
{
protected:
	int count;
	int capacity;
	ISpaceMarine **units;
public:
	Squad();
	Squad(Squad const &);
	Squad(int);
	Squad &operator=(Squad const &);
	virtual ~Squad();
	virtual int getCount() const;
	virtual ISpaceMarine * getUnit(int) const;
	virtual int push(ISpaceMarine *);
};




#endif