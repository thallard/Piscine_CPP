/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:04:52 by thallard          #+#    #+#             */
/*   Updated: 2021/04/20 13:44:49 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
	std::vector<int> array;
	array.push_back(12);
	array.push_back(24);
	array.push_back(31);
	array.push_back(455);
	array.push_back(52);
	try
	{
		std::cout << "\e[35mValeur recherchée : 12 -> " << ::easyfind(array, 12) << ".\e[0m" << std::endl;
		std::cout << "\e[35mValeur recherchée : 52 -> " << ::easyfind(array, 52) << ".\e[0m" << std::endl;
		std::cout << "\e[35mValeur recherchée : 51 -> \e[0m" << ::easyfind(array, 51) << ".\e[0m" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}