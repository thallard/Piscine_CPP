/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:24:05 by thallard          #+#    #+#             */
/*   Updated: 2021/03/31 16:09:14 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP
#include "IMateriaSource.hpp"
#include <iostream>
#include <string>
#include <vector>

class MateriaSource : public IMateriaSource
{
private:
	std::vector<AMateria *> materias;
public:
	MateriaSource();
	MateriaSource(MateriaSource const &);
	MateriaSource &operator=(MateriaSource const &);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif