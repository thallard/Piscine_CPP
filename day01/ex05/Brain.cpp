/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:15:20 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 13:48:12 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : age(20), qi(107)
{
    std::cout << "\e[32mLe cerveau âgé de " << age << " ans et avec un QI de " << qi << " vient d'être créé!\e[0m" << std::endl;
}

Brain::~Brain()
{
    std::cout << "\e[33mLe cerveau âgé de " << age << " et avec un QI de " << qi << " vient d'être détruit!\e[0m" << std::endl;
}

std::string Brain::identify()
{
    long address = (long)this;
    std::stringstream address_final;
    std::string result;
    address_final << "0x" << std::uppercase << std::hex << address;
    result = address_final.str();
    return (result);
}