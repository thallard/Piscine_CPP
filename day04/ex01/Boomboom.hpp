/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Boomboom.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:42:14 by thallard          #+#    #+#             */
/*   Updated: 2021/04/12 16:05:53 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOMBOOM_HPP
#define BOOMBOOM_HPP
#include "AWeapon.hpp"
#include <iostream>
#include <string>

class Boomboom : public AWeapon
{
private:
	
public:
	Boomboom();
	Boomboom(Boomboom const & ref);
	Boomboom &operator=(Boomboom const & ref);
	virtual ~Boomboom();
	virtual void attack(void) const;
};

#endif