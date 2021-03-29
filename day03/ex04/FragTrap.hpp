/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:37:42 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 14:15:35 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string Name);
	FragTrap(FragTrap const & frag);
	~FragTrap();
	FragTrap &operator=(FragTrap const & ref);
	void vaulthunter_dot_exe(std::string const & target);
};



#endif