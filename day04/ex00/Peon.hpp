/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:45:21 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 17:06:44 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"
#include <iostream>
#include <string>

class Peon : public Victim
{
private:
	Peon(/* args */);
public:
	Peon(std::string name);
	Peon(Peon const & ref);
	~Peon();
	Peon &operator=(Peon const & ref);
};

std::ostream &operator<<(std::ostream & ostream, Peon const & ref);


#endif