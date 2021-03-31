/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:29:11 by thallard          #+#    #+#             */
/*   Updated: 2021/03/31 19:48:18 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &);
	Cure &operator=(Cure const &);
	~Cure();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif