/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Farmer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:07:04 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 17:13:57 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Farmer.hpp"

Farmer::Farmer(/* args */)
{
}

Farmer::Farmer(std::string Name) : Victim(Name)
{
	std::cout << "\e[32mFarmer " << Name << " just spawned.\e[0m" << std::endl;
}

Farmer::Farmer(Farmer const & ref) : Victim(ref.name)
{
	std::cout << "\e[32mFarmer " << ref.name << " just spawned.\e[0m" << std::endl;
}

Farmer &Farmer::operator=(Farmer const & ref)
{
	name = ref.name;
	return *this;
}

Farmer::~Farmer()
{
	std::cout << "\e[31mFarmer " << name << " just died.\e[0m" << std::endl;
}

std::ostream &operator<<(std::ostream & ostream, Farmer const & ref)
{
	ostream << ref.introduce() << std::endl;
	return ostream;
}