/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:54:38 by thallard          #+#    #+#             */
/*   Updated: 2021/04/12 16:06:41 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include "AWeapon.hpp"
#include <iostream>
#include <string>


class PowerFist : public AWeapon
{
private:
	
public:
	PowerFist();
	PowerFist(PowerFist const & ref);
	PowerFist &operator=(PowerFist const & ref);
	virtual ~PowerFist();
	virtual void attack(void) const;
};



#endif