/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:53:20 by thallard          #+#    #+#             */
/*   Updated: 2021/03/31 19:03:18 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include <string>
#include <iostream>
#include <vector>

class Character : public ICharacter
{
private:
	std::string name;
	std::vector<AMateria *> materias;
	Character();
public:
	Character(std::string name);
	Character(Character const &);
	Character &operator=(Character const &);
	virtual ~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};



#endif