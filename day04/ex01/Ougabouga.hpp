/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ougabouga.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:32:14 by thallard          #+#    #+#             */
/*   Updated: 2021/03/30 11:25:19 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUGABOUGA_HPP
#define OUGABOUGA_HPP
#include "Enemy.hpp"
#include <iostream>
#include <string>

class Ougabouga : public Enemy
{
private:
	
public:
	Ougabouga();
	Ougabouga(Ougabouga const &);
	Ougabouga &operator=(Ougabouga const &);
	virtual ~Ougabouga();
};




#endif