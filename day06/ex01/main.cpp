/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:15:51 by thallard          #+#    #+#             */
/*   Updated: 2021/04/07 21:23:00 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "serialisation.hpp"

void *serialize(void)
{
	Data *datas = new Data();
	char ref_ascii[] = "abcdefghijklmnopqrstuvwxyz0123456789";

	for (int i = 0; i < 8; i++)
		datas->s1 += ref_ascii[rand() % 36];
	datas->n = rand() % 1000;
	for (int i = 0; i < 8; i++)
		datas->s2 += ref_ascii[rand() % 36];
	return reinterpret_cast<void *>(datas);
}

Data *deserialize(void *raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	void *address = serialize();
	Data *datas = deserialize(address);
	std::cout << "\e[32mData serialized : " << address << ".\e[0m" << std::endl;
	std::cout << "\e[35mData deserialized : " << datas->s1 << datas->n << datas->s2 << ".\e[0m" << std::endl;
	delete datas;
}