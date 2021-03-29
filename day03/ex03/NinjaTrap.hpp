/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:00:14 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 13:26:25 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
#define NINJA_TRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class NinjaTrap : public ClapTrap
{
private:
	/* data */
public:
	NinjaTrap(/* args */);
	NinjaTrap(std::string Name);
	NinjaTrap(NinjaTrap const & ref);
	~NinjaTrap();
	NinjaTrap &operator=(NinjaTrap const & ref);
	void ninjaShoebox(NinjaTrap & ref);
	void ninjaShoebox(ClapTrap & ref);
	void ninjaShoebox(FragTrap & ref);
	void ninjaShoebox(ScavTrap & ref);
};


#endif