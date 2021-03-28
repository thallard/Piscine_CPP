/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:47:09 by thallard          #+#    #+#             */
/*   Updated: 2021/03/28 13:44:04 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & ref);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const & ref);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void beRepaired(unsigned int amount);
	void takeDamage(unsigned int amount);
	void challengeNewComer();
	
};



#endif