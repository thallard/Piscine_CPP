/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:25:54 by thallard          #+#    #+#             */
/*   Updated: 2021/03/31 20:53:36 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource const &ref)
{
	for (size_t i = 0; i < ref.materias.size(); i++)
		materias.push_back(ref.materias[i]);
}

MateriaSource &MateriaSource::operator=(MateriaSource const &ref)
{
	for (size_t i = 0; i < ref.materias.size(); i++)
		materias.push_back(ref.materias[i]);
	return *this;
}

MateriaSource::~MateriaSource()
{
	size_t i = materias.size();
	while (i > 0)
		delete materias[--i];
	std::cout << "\e[31mMateriaSource destroyed !\e[0m" << std::endl;
}

void MateriaSource::learnMateria(AMateria *mat)
{
	if (materias.size() >= 4)
	{
		std::cout << "\e[31mToo much materias in Source's inventory!" << std::endl;
		return;
	}
	materias.push_back(mat);
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	std::vector<std::string>::iterator it;

	if (type != "ice" && type != "cure")
	{
		std::cout << "\e[31mImpossible to create this Materia : Unknow type of Materia!\e[0m" << std::endl;
		return (0);
	}
	for (size_t i = 0; i < materias.size(); i++)
		if (materias[i]->getType() == type)
			return (materias[i]->clone());
	return (0);
}