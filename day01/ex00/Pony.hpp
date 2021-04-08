/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 23:51:10 by thallard          #+#    #+#             */
/*   Updated: 2021/04/06 10:56:11 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
#include <iostream>
#include <string>

class Pony
{
private:
    std::string name;
    std::string color;
public:
    Pony(std::string name, std::string color);
    ~Pony();
    std::string getColor();
    std::string getName();
    void run(Pony *pony);
};

#endif