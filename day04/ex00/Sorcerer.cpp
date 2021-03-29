/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:52:45 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 17:15:03 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(/* args */)
{
	std::cout << "\e[32mDefault constructor called Sorcerer\e[0m" << std::endl;
}

Sorcerer::Sorcerer(std::string Name, std::string Title) : name(Name), title(Title)
{
	std::cout << "\e[32m" << this->name << ", " << this->title << ", is born!\e[0m" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &ref)
{
	name = ref.name;
	title = ref.title;
	std::cout << "\e[32m" << this->name << ", " << this->title << ", is born!\e[0m" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &ref)
{
	name = ref.name;
	title = ref.title;
	std::cout << "\e[32mConstructor by copy called Sorcerer " << ref.getName() << "\e[0m" << std::endl;
	return *this;
}

Sorcerer::~Sorcerer()
{
	std::cout << "\e[31m" << this->name << ", " << this->title << ", is dead. Consequences will never be the same!\e[0m" << std::endl;
}

std::ostream &operator<<(std::ostream &ostream, Sorcerer const &ref)
{
	ostream << ref.introduce() << std::endl;
	return ostream;
}

std::string Sorcerer::introduce() const
{
	return ("\e[36mI am " + getName() + ", " + getTitle() + ", and I like ponies!\e[0m");
}

void Sorcerer::polymorph(Victim const &victim) const
{
	std::cout << "\e[35m" << victim.getName() << " was just polymorphed in a cute little sheep!\e[0m" << std::endl;
}

void Sorcerer::polymorph(Peon const &peon) const
{
	std::cout << "\e[35m" << peon.getName() << " has been turned into a pink pony!\e[0m" << std::endl;
}

void Sorcerer::polymorph(Farmer const &farmer) const
{
	std::cout << "\e[35m" << farmer.getName() << " just became a little blue bird!\e[0m" << std::endl;
}

std::string Sorcerer::getName() const { return this->name; }
std::string Sorcerer::getTitle() const { return this->title; }