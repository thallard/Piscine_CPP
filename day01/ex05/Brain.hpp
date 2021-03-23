/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:15:58 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 13:48:15 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sstream>

class Brain
{
private:
    int     age;
    int     qi;
public:
    Brain();
    Brain(int age, int qi);
    ~Brain();
    std::string identify();
};

#endif