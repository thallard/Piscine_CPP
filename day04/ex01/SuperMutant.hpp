/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:19:06 by thallard          #+#    #+#             */
/*   Updated: 2021/03/30 11:28:49 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"
#include <iostream>
#include <string>

class SuperMutant : public Enemy
{
private:
public:
	SuperMutant();
	SuperMutant(SuperMutant const &);
	SuperMutant &operator=(SuperMutant const &);
	virtual ~SuperMutant();
	virtual void takeDamage(int);
};




#endif