/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:08:47 by thallard          #+#    #+#             */
/*   Updated: 2021/03/23 13:14:23 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string text = "HI THIS IS BRAIN";
    std::string *txt = &text;
    std::string &texte = text;

    std::cout << texte << std::endl;
    std::cout << *txt << std::endl;
    return 0;
}