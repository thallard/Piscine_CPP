/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:53:57 by thallard          #+#    #+#             */
/*   Updated: 2021/03/31 16:50:51 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	
}

Character::Character(std::string Name) : name(Name), materias(0)
{
	std::cout << "\e[32mCharacter " << name << "has been created!" << std::endl;
}

Character::Character(Character const & ref)
{
	name = ref.name;
	for (size_t i = 0; i < ref.materias.size(); i++)
		materias.push_back(ref.materias[i]);
	std::cout << "\e[32mCharacter " << name << "has been created!" << std::endl;
}

Character &Character::operator=(Character const & ref)
{
	name = ref.name;
	delete this;
	for (size_t i = 0; i < ref.materias.size(); i++)
		materias.push_back(ref.materias[i]);
	return *this;
}

Character::~Character()
{
	std::cout << "\e[31mCharacter " << name << "has been destroyed!" << std::endl;
}

std::string const &Character::getName() const { return this->name; }

void Character::equip(AMateria *m)
{
	if (materias.size() >= 4)
	{
		std::cout << "\e[31mToo much materias in " << name << "'s inventory!" << std::endl;
		return ;
	}
	materias.push_back(m);
}

void Character::unequip(int idx)
{
	if ((size_t)idx > materias.size())
		return ;
	materias.erase(materias.begin() + idx);
}

void Character::use(int idx, ICharacter& target)
{
	materias[idx]->use(target);
}