/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:07:32 by thallard          #+#    #+#             */
/*   Updated: 2021/04/09 14:31:18 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		Array<float> &arf = *new Array<float>(10);
		arf[5] = 42.0f;

		Array<float> &arf2 = *new Array<float>(arf);
		std::cout << arf2[5] << std::endl;

		std::cout << "Size arf : "<< arf.size() << std::endl;
		std::cout << "Size arf2 : "<< arf2.size() << std::endl;
		
		delete &arf;
		delete &arf2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}