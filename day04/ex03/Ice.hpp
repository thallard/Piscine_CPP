/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:51:21 by thallard          #+#    #+#             */
/*   Updated: 2021/03/31 17:05:16 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &);
	Ice &operator=(Ice const &);
	~Ice();
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};


#endif