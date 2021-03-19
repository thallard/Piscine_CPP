/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utilities.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 23:08:20 by thallard          #+#    #+#             */
/*   Updated: 2021/03/20 00:10:23 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

int contains_digit(std::string str)
{
    for (int i = 0; i < (int)str.size(); i++)
        if (isdigit(str[i]))
            return (1);
    return (0);
}

int contains_alpha(std::string str)
{
     for (int i = 0; i < (int)str.size(); i++)
        if (isalpha(str[i]))
            return (1);
    return (0);
}

int contains_arobase(std::string str)
{
      for (int i = 0; i < (int)str.size(); i++)
        if (str[i] == '@')
            return (1);
    return (0);
}