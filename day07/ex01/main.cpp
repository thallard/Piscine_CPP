/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:36:01 by thallard          #+#    #+#             */
/*   Updated: 2021/04/09 13:40:26 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void iter(T *tab, unsigned int size, void (*function)(T &element))
{
	for (unsigned int i = 0; i < size; i++)
		function(tab[i]);
}

void print_str(std::string &content)
{
	std::cout << "\e[34m" << content << "\e[0m" << std::endl;
}

void print_nb(int &nb)
{
	std::cout << "\e[35m" << nb << "\e[0m" << std::endl;
}

int main()
{
	std::string names[5] = {"Mama", "Lucas", "Henry", "Patrick", "Marguerite"};
	int numbers[5] = {1, 2, 3, 4, 5};

	::iter(names, 5, print_str);
	std::cout << std::endl;
	::iter(numbers, 5, print_nb);

	return (0);
}