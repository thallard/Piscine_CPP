/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 14:24:44 by thallard          #+#    #+#             */
/*   Updated: 2021/03/30 14:26:14 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
private:
	/* data */
public:
	TacticalMarine(/* args */);
	~TacticalMarine();
};

TacticalMarine::TacticalMarine(/* args */)
{
}

TacticalMarine::~TacticalMarine()
{
}


#endif