/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:15:51 by thallard          #+#    #+#             */
/*   Updated: 2021/04/07 16:39:01 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "serialisation.hpp"


void *serialize(void)
{
	char data[5];
	data[0] = "qwertyui";
	data[1] = "azertyui";
	data[2] = "abcdefgh";
	data[3] = "accelere";
	data[4] = "paillard";
	char *str = new char[21];
	void		*address;

	strcpy(str, static_cast<const char *>(data[std::rand() % 5]));
	strcpy(str, "2147483647");
	address = &str;
	std::cout << address << std::endl;
	return NULL;
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	serialize();
	return 0;
}