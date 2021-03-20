/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:24:53 by thallard          #+#    #+#             */
/*   Updated: 2021/03/20 22:28:18 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <iostream>

int contains_digit(std::string str);
int contains_alpha(std::string str);
int contains_arobase(std::string str);
void cut_and_print(std::string str);

#endif