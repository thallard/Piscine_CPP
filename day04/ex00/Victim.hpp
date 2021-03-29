/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:06:20 by thallard          #+#    #+#             */
/*   Updated: 2021/03/29 17:14:58 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <string>
#include <iostream>

class Victim
{
protected:
	std::string name;
	Victim();

public:
	Victim(std::string name);
	Victim(Victim const &ref);
	~Victim();
	Victim &operator=(Victim const &ref);
	void getPolymorphed(void) const;
	std::string introduce() const;
	std::string getName() const;
};

std::ostream &operator<<(std::ostream &ostream, Victim const &ref);

#endif