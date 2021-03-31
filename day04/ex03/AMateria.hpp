/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:57:02 by thallard          #+#    #+#             */
/*   Updated: 2021/03/31 17:03:06 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>

class AMateria
{
protected:
	unsigned int _xp;
	std::string type;
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &);
	AMateria &operator=(AMateria const &);
	virtual ~AMateria();
	std::string const &getType() const; //Returns the materia type
	unsigned int getXP() const;			//Returns the Materia's XP
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif