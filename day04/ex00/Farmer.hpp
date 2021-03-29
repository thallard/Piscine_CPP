/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Farmer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:05:18 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 17:13:53 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FARMER_HPP
#define FARMER_HPP
#include "Victim.hpp"

class Farmer : public Victim
{
private:
	Farmer(/* args */);
public:
	Farmer(std::string name);
	Farmer(Farmer const & ref);
	Farmer &operator=(Farmer const & ref);
	~Farmer();

};
std::ostream &operator<<(std::ostream & ostream, Farmer const & ref);



#endif