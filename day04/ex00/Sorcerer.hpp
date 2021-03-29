/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:53:27 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 17:15:00 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include "Victim.hpp"
#include "Peon.hpp"
#include "Farmer.hpp"
#include <string>
#include <iostream>

class Sorcerer
{
private:
	std::string name;
	std::string title;
	Sorcerer(/* args */);

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &ref);
	Sorcerer &operator=(Sorcerer const &ref);
	~Sorcerer();
	void polymorph(Victim const &victim) const;
	void polymorph(Peon const &peon) const;
	void polymorph(Farmer const &peon) const;
	std::string getName() const;
	std::string getTitle() const;
	std::string introduce() const;
};

std::ostream &operator<<(std::ostream &ostream, Sorcerer const &ref);

#endif