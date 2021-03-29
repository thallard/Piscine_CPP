/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:33:19 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 15:11:22 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_HPP
#define SUPER_TRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
	/* data */
public:
	SuperTrap(/* args */);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & ref);
	~SuperTrap();
	SuperTrap & operator=(SuperTrap const & ref);
};



#endif