/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:32:14 by thallard          #+#    #+#             */
/*   Updated: 2021/04/12 16:06:28 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include "Enemy.hpp"
#include <iostream>
#include <string>

class RadScorpion : public Enemy
{
private:
	
public:
	RadScorpion();
	RadScorpion(RadScorpion const &);
	RadScorpion &operator=(RadScorpion const &);
	virtual ~RadScorpion();
};




#endif