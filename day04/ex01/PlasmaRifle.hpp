/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:42:14 by thallard          #+#    #+#             */
/*   Updated: 2021/04/12 16:06:43 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include "AWeapon.hpp"
#include <iostream>
#include <string>

class PlasmaRifle : public AWeapon
{
private:
	
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const & ref);
	PlasmaRifle &operator=(PlasmaRifle const & ref);
	virtual ~PlasmaRifle();
	virtual void attack(void) const;
};

#endif